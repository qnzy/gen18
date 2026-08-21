* GEN18 DEVICE REGRESSION TESTS
*
* Basic sanity checks on every device in gen18.inc.
* Model-level only: no xschem, no symbols. Runs in a bare container.
*
*   ngspice -b test_devices.sp
*
* Every check prints a PASS or FAIL line. For CI, fail the build on any
* FAIL in the output, e.g.:
*
*   ngspice -b test_devices.sp | tee test.log
*   ! grep -q FAIL test.log
*
* The MOSFET Vgs bands are measured values from ngspice-42, +/-2%.
* They exist to catch a subckt pointing at the wrong model card; widen
* them if a simulator or model update moves the operating point.

.include gen18.inc

*** supplies ***********************************************************

vdd18 vdd18 0 dc 1.8
vdd33 vdd33 0 dc 3.3

*** MOSFET current mirrors *********************************************
*
* Diode-connected input at 10uA, output device with m=2.
* The E source forces the output drain to the same voltage as the
* diode-connected gate, so Vds matches and the ratio is exactly m.
* This checks the model reference, the mirror, and m propagation.

* NMOS18
in18   0 n18g dc 10u
xn18d  n18g n18g 0 0 nmos18 w=2u l=1u
en18   n18f 0 n18g 0 1
vn18   n18f n18d dc 0
xn18o  n18d n18g 0 0 nmos18 w=2u l=1u m=2

* PMOS18
ip18   p18g 0 dc 10u
xp18d  p18g p18g vdd18 vdd18 pmos18 w=2u l=1u
ep18   p18f 0 p18g 0 1
vp18   p18d p18f dc 0
xp18o  p18d p18g vdd18 vdd18 pmos18 w=2u l=1u m=2

* NMOS33
in33   0 n33g dc 10u
xn33d  n33g n33g 0 0 nmos33 w=2u l=1u
en33   n33f 0 n33g 0 1
vn33   n33f n33d dc 0
xn33o  n33d n33g 0 0 nmos33 w=2u l=1u m=2

* PMOS33
ip33   p33g 0 dc 10u
xp33d  p33g p33g vdd33 vdd33 pmos33 w=2u l=1u
ep33   p33f 0 p33g 0 1
vp33   p33d p33f dc 0
xp33o  p33d p33g vdd33 vdd33 pmos33 w=2u l=1u m=2

*** substrate PNP ******************************************************
*
* Two diode-connected PNPs at the same current, areas 1:8.
* dVbe = VT*ln(8) = 53.8mV at 27C. This is the emitter-scaling check
* every bandgap depends on.

iq1 0 qe1 dc 10u
xq1 0 0 qe1 pnps

iq8 0 qe8 dc 10u
xq8 0 0 qe8 pnps m=8

*** resistors **********************************************************
*
* 1V forced across each, R recovered from the source current.
* rpp: 310 Ohm/sq -> w=1u l=10u is 3100 Ohm.
* rm:  0.1 Ohm/sq -> w=1u l=10u is 1 Ohm.

vrpp   rpp1 0 dc 1
xrpp   rpp1 0 rpp w=1u l=10u

vrppns rpp2 0 dc 1
xrppns rpp2 0 rpp w=1u l=10u ns=10

vrppnp rpp3 0 dc 1
xrppnp rpp3 0 rpp w=1u l=10u np=2

vrm    rm1 0 dc 1
xrm    rm1 0 rm w=1u l=10u

* divider: 3100 over 9300 -> 0.75
vdiv   dtop 0 dc 1
xrd1   dtop dmid rpp w=1u l=10u
xrd2   dmid 0    rpp w=1u l=10u ns=3

*** MIM capacitor ******************************************************
*
* Each instance drives exactly one of the two internal caps and holds
* the other terminals at AC ground with a 0V source, so no capacitor
* ever has both nodes shorted.

* main cap: drive top       -> 1fF/um^2 * 100um^2 = 100fF
vc1    c1t 0 dc 0 ac 1
vc1s   c1s 0 dc 0
xc1    c1t 0 c1s cmim w=10u l=10u

* bottom plate: drive sub   -> 1% of 100fF = 1fF
vc2    c2s 0 dc 0 ac 1
vc2t   c2t 0 dc 0
xc2    c2t 0 c2s cmim w=10u l=10u

* multiplicity: m=4        -> 400fF
vc3    c3t 0 dc 0 ac 1
vc3s   c3s 0 dc 0
xc3    c3t 0 c3s cmim w=10u l=10u m=4

*** checks *************************************************************

.control

set noaskquit
echo
echo "=== gen18 device tests ==="
echo

op

* --- mirror ratios: m=2 must give exactly 2x ---

let i_n18 = abs(i(vn18))/1u
if abs(i_n18 - 20) < 0.2
  echo "PASS  nmos18 mirror m=2   $&i_n18 uA"
else
  echo "FAIL  nmos18 mirror m=2   $&i_n18 uA (expected 20)"
end

let i_p18 = abs(i(vp18))/1u
if abs(i_p18 - 20) < 0.2
  echo "PASS  pmos18 mirror m=2   $&i_p18 uA"
else
  echo "FAIL  pmos18 mirror m=2   $&i_p18 uA (expected 20)"
end

let i_n33 = abs(i(vn33))/1u
if abs(i_n33 - 20) < 0.2
  echo "PASS  nmos33 mirror m=2   $&i_n33 uA"
else
  echo "FAIL  nmos33 mirror m=2   $&i_n33 uA (expected 20)"
end

let i_p33 = abs(i(vp33))/1u
if abs(i_p33 - 20) < 0.2
  echo "PASS  pmos33 mirror m=2   $&i_p33 uA"
else
  echo "FAIL  pmos33 mirror m=2   $&i_p33 uA (expected 20)"
end

echo

* --- Vgs at 10uA: catches a subckt pointing at the wrong model card ---

let vgs_n18 = v(n18g)
if vgs_n18 > 0.60 & vgs_n18 < 0.63
  echo "PASS  nmos18 Vgs          $&vgs_n18 V"
else
  echo "FAIL  nmos18 Vgs          $&vgs_n18 V (expected 0.60..0.63)"
end

let vgs_p18 = 1.8 - v(p18g)
if vgs_p18 > 0.82 & vgs_p18 < 0.85
  echo "PASS  pmos18 |Vgs|        $&vgs_p18 V"
else
  echo "FAIL  pmos18 |Vgs|        $&vgs_p18 V (expected 0.82..0.85)"
end

let vgs_n33 = v(n33g)
if vgs_n33 > 0.80 & vgs_n33 < 0.83
  echo "PASS  nmos33 Vgs          $&vgs_n33 V"
else
  echo "FAIL  nmos33 Vgs          $&vgs_n33 V (expected 0.80..0.83)"
end

let vgs_p33 = 3.3 - v(p33g)
if vgs_p33 > 1.27 & vgs_p33 < 1.31
  echo "PASS  pmos33 |Vgs|        $&vgs_p33 V"
else
  echo "FAIL  pmos33 |Vgs|        $&vgs_p33 V (expected 1.27..1.31)"
end

echo

* --- PNP emitter area scaling ---

let dvbe = (v(qe1) - v(qe8))*1e3
if abs(dvbe - 53.8) < 1.5
  echo "PASS  pnps dVbe 1:8       $&dvbe mV"
else
  echo "FAIL  pnps dVbe 1:8       $&dvbe mV (expected 53.8)"
end

echo

* --- resistor values ---

let r_rpp = 1/abs(i(vrpp))
if abs(r_rpp/3100 - 1) < 0.01
  echo "PASS  rpp w=1u l=10u      $&r_rpp Ohm"
else
  echo "FAIL  rpp w=1u l=10u      $&r_rpp Ohm (expected 3100)"
end

let r_rppns = 1/abs(i(vrppns))
if abs(r_rppns/31000 - 1) < 0.01
  echo "PASS  rpp ns=10           $&r_rppns Ohm"
else
  echo "FAIL  rpp ns=10           $&r_rppns Ohm (expected 31000)"
end

let r_rppnp = 1/abs(i(vrppnp))
if abs(r_rppnp/1550 - 1) < 0.01
  echo "PASS  rpp np=2            $&r_rppnp Ohm"
else
  echo "FAIL  rpp np=2            $&r_rppnp Ohm (expected 1550)"
end

let r_rm = 1/abs(i(vrm))
if abs(r_rm/1 - 1) < 0.01
  echo "PASS  rm w=1u l=10u       $&r_rm Ohm"
else
  echo "FAIL  rm w=1u l=10u       $&r_rm Ohm (expected 1)"
end

let ratio = v(dmid)
if abs(ratio - 0.75) < 0.005
  echo "PASS  rpp divider         $&ratio"
else
  echo "FAIL  rpp divider         $&ratio (expected 0.75)"
end

echo

* --- resistor temperature coefficients ---

dc temp 27 127 100

let tc_rpp = (abs(i(vrpp)[0])/abs(i(vrpp)[1]) - 1)/100
if abs(tc_rpp/1e-3 - 1) < 0.05
  echo "PASS  rpp tc1             $&tc_rpp /K"
else
  echo "FAIL  rpp tc1             $&tc_rpp /K (expected 1e-3)"
end

let tc_rm = (abs(i(vrm)[0])/abs(i(vrm)[1]) - 1)/100
if abs(tc_rm/4e-3 - 1) < 0.05
  echo "PASS  rm tc1              $&tc_rm /K"
else
  echo "FAIL  rm tc1              $&tc_rm /K (expected 4e-3)"
end

echo

* --- MIM capacitor ---

ac lin 1 1meg 1meg

let c_main = abs(i(vc1))/(2*pi*frequency)/1e-15
if abs(c_main/100 - 1) < 0.01
  echo "PASS  cmim 10u x 10u      $&c_main fF"
else
  echo "FAIL  cmim 10u x 10u      $&c_main fF (expected 100)"
end

let c_bot = abs(i(vc2))/(2*pi*frequency)/1e-15
if abs(c_bot/1 - 1) < 0.01
  echo "PASS  cmim bottom plate   $&c_bot fF"
else
  echo "FAIL  cmim bottom plate   $&c_bot fF (expected 1)"
end

let c_mult = abs(i(vc3))/(2*pi*frequency)/1e-15
if abs(c_mult/400 - 1) < 0.01
  echo "PASS  cmim m=4            $&c_mult fF"
else
  echo "FAIL  cmim m=4            $&c_mult fF (expected 400)"
end

echo
echo "=== done ==="
echo

quit

.endc

.end
