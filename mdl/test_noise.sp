* GEN18 FLICKER NOISE TESTS
*
* Checks that all four MOSFETs have a working 1/f noise mechanism.
*
*   ngspice -b test_noise.sp
*
* BSIM3 defaults to NOIMOD=1, which uses the SPICE2 flicker model with
* KF=0 -- i.e. no flicker noise at all, silently. These models carry
* NOIMOD=2 instead, selecting BSIM3's unified physical model whose
* NOIA/NOIB/NOIC/EM parameters have sensible non-zero defaults.
*
* The magnitudes below come from those defaults, NOT from the MOSIS
* extraction, so they are generic rather than process-accurate. The
* tests check the 1/f MECHANISM is present and scales with area, which
* is what silently breaks. They do not validate absolute noise.
*
* One transistor per subcircuit: noise analysis needs one output node
* and one input source, so each device gets its own testbench section
* and the checks re-run the analysis per device.

.include gen18.inc

*** 1.8V devices, biased into saturation through a resistive load *****

vdd18 vdd18 0 dc 1.8
vdd33 vdd33 0 dc 3.3

* NMOS18: 10u/1u
vgn18 gn18 0 dc 0.8 ac 1
rn18  vdd18 dn18 20k
xn18  dn18 gn18 0 0 nmos18 w=10u l=1u

* PMOS18: 10u/1u
vgp18 gp18 0 dc 1.0 ac 1
rp18  dp18 0 20k
xp18  dp18 gp18 vdd18 vdd18 pmos18 w=10u l=1u

* NMOS33: 10u/1u
vgn33 gn33 0 dc 1.1 ac 1
rn33  vdd33 dn33 20k
xn33  dn33 gn33 0 0 nmos33 w=10u l=1u

* PMOS33: 10u/1u
vgp33 gp33 0 dc 2.1 ac 1
rp33  dp33 0 20k
xp33  dp33 gp33 vdd33 vdd33 pmos33 w=10u l=1u

* NMOS18 with 4x the area -- 1/f must drop, thermal must not
vgn18b gn18b 0 dc 0.8 ac 1
rn18b  vdd18 dn18b 20k
xn18b  dn18b gn18b 0 0 nmos18 w=20u l=2u

*** checks ************************************************************

.control

set noaskquit
echo
echo "=== gen18 flicker noise tests ==="
echo

* Sweep 1 Hz .. 100 MHz, 20 points/decade.
* index 60  -> 1 kHz  |  index 159 -> ~100 MHz (thermal floor)
* Each noise command creates TWO plots -- the spectrum and the
* integrated total -- so the spectra land in noise1, 3, 5, 7, 9.
* Vectors are read back with plot-qualified names, because "let"
* results do not survive a plot switch.

noise v(dn18)  vgn18  dec 20 1 1e8 1
noise v(dp18)  vgp18  dec 20 1 1e8 1
noise v(dn33)  vgn33  dec 20 1 1e8 1
noise v(dp33)  vgp33  dec 20 1 1e8 1
noise v(dn18b) vgn18b dec 20 1 1e8 1

setplot const

* A working 1/f mechanism puts the 1kHz value well above the thermal
* floor. With NOIMOD=1 and KF=0 (the BSIM3 default) the ratio is 1.

let names = 0

let v1k = noise1.inoise_spectrum[60]
let vfl = noise1.inoise_spectrum[159]
let rr  = v1k / vfl
let fk  = sqrt(v1k*v1k - vfl*vfl)
let fc  = 1e3 * (fk/vfl)^2
if rr > 3
  echo "PASS  nmos18 has 1/f      1kHz $&v1k  floor $&vfl  corner $&fc Hz"
else
  echo "FAIL  nmos18 NO 1/f       ratio $&rr -- flat spectrum, check NOIMOD"
end

let v1k = noise3.inoise_spectrum[60]
let vfl = noise3.inoise_spectrum[159]
let rr  = v1k / vfl
let fk  = sqrt(v1k*v1k - vfl*vfl)
let fc  = 1e3 * (fk/vfl)^2
if rr > 3
  echo "PASS  pmos18 has 1/f      1kHz $&v1k  floor $&vfl  corner $&fc Hz"
else
  echo "FAIL  pmos18 NO 1/f       ratio $&rr -- flat spectrum, check NOIMOD"
end

let v1k = noise5.inoise_spectrum[60]
let vfl = noise5.inoise_spectrum[159]
let rr  = v1k / vfl
let fk  = sqrt(v1k*v1k - vfl*vfl)
let fc  = 1e3 * (fk/vfl)^2
if rr > 3
  echo "PASS  nmos33 has 1/f      1kHz $&v1k  floor $&vfl  corner $&fc Hz"
else
  echo "FAIL  nmos33 NO 1/f       ratio $&rr -- flat spectrum, check NOIMOD"
end

let v1k = noise7.inoise_spectrum[60]
let vfl = noise7.inoise_spectrum[159]
let rr  = v1k / vfl
let fk  = sqrt(v1k*v1k - vfl*vfl)
let fc  = 1e3 * (fk/vfl)^2
if rr > 3
  echo "PASS  pmos33 has 1/f      1kHz $&v1k  floor $&vfl  corner $&fc Hz"
else
  echo "FAIL  pmos33 NO 1/f       ratio $&rr -- flat spectrum, check NOIMOD"
end

echo

* 4x area (20u/2u vs 10u/1u) should cut 1/f voltage noise ~2x

let a1 = noise1.inoise_spectrum[60]
let a1f = noise1.inoise_spectrum[159]
let a2 = noise9.inoise_spectrum[60]
let a2f = noise9.inoise_spectrum[159]
let sc = sqrt(a1*a1 - a1f*a1f) / sqrt(a2*a2 - a2f*a2f)
if sc > 1.6 & sc < 2.5
  echo "PASS  1/f scales with area   4x WL gives $&sc x lower"
else
  echo "FAIL  1/f area scaling       4x WL gives $&sc x (expected ~2)"
end

echo
echo "=== done ==="
echo

quit

.endc

.end
