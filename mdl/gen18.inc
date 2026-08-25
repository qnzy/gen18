* GEN18: GENERIC 180NM PROCESS
*
* DEVICES: 
* - NMOS18: 1.8V NMOS
* - PMOS18: 1.8V PMOS
* - NMOS33: 3.3V NMOS
* - PMOS33: 3.3V PMOS
* - PNPS: SUBSTRATE PNP
* - RPP: POLY RESISTOR
* - RM: METAL RESISTOR
* - CMIM: MIM CAPACITOR


.model NMOS18_MODEL nmos level=54 version=4.7
+ mobmod=0 capmod=2 rdsmod=0 igcmod=0 igbmod=0 diomod=1
+ rgatemod=0 rbodymod=0 trnqsmod=0 acnqsmod=0 permod=1 geomod=0
+ toxe=4.1000e-09 toxp=4.1000e-09 toxm=4.1000e-09 epsrox=3.9
+ ndep=5.2475e+17 xj=1.200e-07
+ vth0=0.47420 k1=0.61404 k2=-0.03000 k3=0 k3b=0 w0=2.5e-6
+ vfb=-0.97632 phin=0 lpe0=0 lpeb=0
+ dvt0=2.200 dvt1=0.540 dvt2=-0.01
+ dvt0w=0 dvt1w=0 dvt2w=0 dsub=0.560
+ eta0=0.0600 etab=-0.02
+ nfactor=1.5431 voff=-0.08 voffl=0 minv=0.0
+ cit=0 cdsc=2.4e-4 cdscd=0 cdscb=0
+ u0=0.04191 ua=1.000e-09 ub=1.600e-18 uc=-5.000e-11
+ vsat=8.500e+04 a0=1.0 ags=0.0 a1=0 a2=1.0 b0=0 b1=0
+ keta=-0.02
+ rdsw=180.0 prwg=0 prwb=0 wr=1 rsh=6.50
+ pclm=2.73268 pdiblc1=0.33039 pdiblc2=4.427e-04
+ pdiblcb=0 drout=0.3817 pvag=1.49988 pscbe1=1e9 pscbe2=1e-9
+ lint=1.200e-08 wint=1.000e-08 dwg=0 dwb=0 xl=0 xw=0
+ ll=0 lw=0 lwl=0 wl=0 ww=0 wwl=0
+ cgso=3.874e-10 cgdo=3.874e-10 cgbo=1.0e-10
+ cgsl=0 cgdl=0 ckappas=0.6 ckappad=0.6 clc=1e-7 cle=0.6
+ cjs=1.0000e-03 cjd=1.0000e-03 mjs=0.35 mjd=0.35
+ pbs=0.9368 pbd=0.9368
+ cjsws=2.000e-10 cjswd=2.000e-10 mjsws=0.25 mjswd=0.25
+ pbsws=0.8 pbswd=0.8
+ cjswgs=1.800e-10 cjswgd=1.800e-10 mjswgs=0.25 mjswgd=0.25
+ pbswgs=0.8 pbswgd=0.8
+ jss=1e-7 jsws=1e-13 njs=1.0 xtis=3.0
+ fnoimod=1 tnoimod=1
+ em=4.1e7 af=1 ef=1 kf=0 ntnoi=1.0
+ tnom=27 ute=-1.5 kt1=-0.11 kt1l=0 kt2=0.022 ua1=1e-9 ub1=-1e-18
+ uc1=0 at=3.3e4 prt=0

.model PMOS18_MODEL pmos level=54 version=4.7
+ mobmod=0 capmod=2 rdsmod=0 igcmod=0 igbmod=0 diomod=1
+ rgatemod=0 rbodymod=0 trnqsmod=0 acnqsmod=0 permod=1 geomod=0
+ toxe=4.1000e-09 toxp=4.1000e-09 toxm=4.1000e-09 epsrox=3.9
+ ndep=6.3088e+17 xj=1.200e-07
+ vth0=-0.42460 k1=0.66199 k2=-0.03000 k3=0 k3b=0 w0=2.5e-6
+ vfb=-1.02853 phin=0 lpe0=0 lpeb=0
+ dvt0=2.000 dvt1=0.520 dvt2=-0.01
+ dvt0w=0 dvt1w=0 dvt2w=0 dsub=0.560
+ eta0=0.0500 etab=-0.02
+ nfactor=1.7317 voff=-0.08 voffl=0 minv=0.0
+ cit=0 cdsc=2.4e-4 cdscd=0 cdscb=0
+ u0=0.01185 ua=1.400e-09 ub=1.200e-18 uc=-4.000e-11
+ vsat=7.000e+04 a0=1.0 ags=0.0 a1=0 a2=1.0 b0=0 b1=0
+ keta=-0.02
+ rdsw=280.0 prwg=0 prwb=0 wr=1 rsh=6.50
+ pclm=2.07024 pdiblc1=0.02009 pdiblc2=3.078e-03
+ pdiblcb=0 drout=1.6701 pvag=0.84122 pscbe1=1e9 pscbe2=1e-9
+ lint=1.200e-08 wint=1.000e-08 dwg=0 dwb=0 xl=0 xw=0
+ ll=0 lw=0 lwl=0 wl=0 ww=0 wwl=0
+ cgso=3.874e-10 cgdo=3.874e-10 cgbo=1.0e-10
+ cgsl=0 cgdl=0 ckappas=0.6 ckappad=0.6 clc=1e-7 cle=0.6
+ cjs=9.5000e-04 cjd=9.5000e-04 mjs=0.35 mjd=0.35
+ pbs=0.9341 pbd=0.9341
+ cjsws=2.000e-10 cjswd=2.000e-10 mjsws=0.25 mjswd=0.25
+ pbsws=0.8 pbswd=0.8
+ cjswgs=1.800e-10 cjswgd=1.800e-10 mjswgs=0.25 mjswgd=0.25
+ pbswgs=0.8 pbswgd=0.8
+ jss=1e-7 jsws=1e-13 njs=1.0 xtis=3.0
+ fnoimod=1 tnoimod=1
+ em=4.1e7 af=1 ef=1 kf=0 ntnoi=1.0
+ tnom=27 ute=-1.5 kt1=-0.11 kt1l=0 kt2=0.022 ua1=1e-9 ub1=-1e-18
+ uc1=0 at=3.3e4 prt=0

.model NMOS33_MODEL nmos level=54 version=4.7
+ mobmod=0 capmod=2 rdsmod=0 igcmod=0 igbmod=0 diomod=1
+ rgatemod=0 rbodymod=0 trnqsmod=0 acnqsmod=0 permod=1 geomod=0
+ toxe=7.5000e-09 toxp=7.5000e-09 toxm=7.5000e-09 epsrox=3.9
+ ndep=1.9024e+17 xj=2.000e-07
+ vth0=0.55220 k1=0.66350 k2=-0.03000 k3=0 k3b=0 w0=2.5e-6
+ vfb=-0.86021 phin=0 lpe0=0 lpeb=0
+ dvt0=2.5 dvt1=0.35 dvt2=-0.01
+ dvt0w=0 dvt1w=0 dvt2w=0 dsub=0.600
+ eta0=0.0300 etab=-0.02
+ nfactor=1.6251 voff=-0.08 voffl=0 minv=0.0
+ cit=0 cdsc=2.4e-4 cdscd=0 cdscb=0
+ u0=0.03594 ua=8.000e-10 ub=1.200e-18 uc=-5.000e-11
+ vsat=8.000e+04 a0=1.0 ags=0.0 a1=0 a2=1.0 b0=0 b1=0
+ keta=-0.02
+ rdsw=300.0 prwg=0 prwb=0 wr=1 rsh=6.50
+ pclm=0.60318 pdiblc1=0.04818 pdiblc2=3.162e-03
+ pdiblcb=0 drout=0.6861 pvag=1.49974 pscbe1=1e9 pscbe2=1e-9
+ lint=2.500e-08 wint=1.500e-08 dwg=0 dwb=0 xl=0 xw=0
+ ll=0 lw=0 lwl=0 wl=0 ww=0 wwl=0
+ cgso=2.118e-10 cgdo=2.118e-10 cgbo=1.0e-10
+ cgsl=0 cgdl=0 ckappas=0.6 ckappad=0.6 clc=1e-7 cle=0.6
+ cjs=8.5000e-04 cjd=8.5000e-04 mjs=0.35 mjd=0.35
+ pbs=0.9282 pbd=0.9282
+ cjsws=2.000e-10 cjswd=2.000e-10 mjsws=0.25 mjswd=0.25
+ pbsws=0.8 pbswd=0.8
+ cjswgs=1.800e-10 cjswgd=1.800e-10 mjswgs=0.25 mjswgd=0.25
+ pbswgs=0.8 pbswgd=0.8
+ jss=1e-7 jsws=1e-13 njs=1.0 xtis=3.0
+ fnoimod=1 tnoimod=1
+ em=4.1e7 af=1 ef=1 kf=0 ntnoi=1.0
+ tnom=27 ute=-1.5 kt1=-0.11 kt1l=0 kt2=0.022 ua1=1e-9 ub1=-1e-18
+ uc1=0 at=3.3e4 prt=0

.model PMOS33_MODEL pmos level=54 version=4.7
+ mobmod=0 capmod=2 rdsmod=0 igcmod=0 igbmod=0 diomod=1
+ rgatemod=0 rbodymod=0 trnqsmod=0 acnqsmod=0 permod=1 geomod=0
+ toxe=7.5000e-09 toxp=7.5000e-09 toxm=7.5000e-09 epsrox=3.9
+ ndep=8.9150e+16 xj=2.000e-07
+ vth0=-0.54840 k1=0.49073 k2=-0.03000 k3=0 k3b=0 w0=2.5e-6
+ vfb=-0.42621 phin=0 lpe0=0 lpeb=0
+ dvt0=1.5 dvt1=0.30 dvt2=-0.01
+ dvt0w=0 dvt1w=0 dvt2w=0 dsub=0.600
+ eta0=0.0250 etab=-0.02
+ nfactor=2.1743 voff=-0.08 voffl=0 minv=0.0
+ cit=0 cdsc=2.4e-4 cdscd=0 cdscb=0
+ u0=0.00926 ua=1.100e-09 ub=1.200e-18 uc=-5.000e-11
+ vsat=6.500e+04 a0=1.0 ags=0.0 a1=0 a2=1.0 b0=0 b1=0
+ keta=-0.02
+ rdsw=450.0 prwg=0 prwb=0 wr=1 rsh=6.50
+ pclm=6.00000 pdiblc1=0.05975 pdiblc2=1.405e-03
+ pdiblcb=0 drout=0.3518 pvag=0.17384 pscbe1=1e9 pscbe2=1e-9
+ lint=2.500e-08 wint=1.500e-08 dwg=0 dwb=0 xl=0 xw=0
+ ll=0 lw=0 lwl=0 wl=0 ww=0 wwl=0
+ cgso=2.118e-10 cgdo=2.118e-10 cgbo=1.0e-10
+ cgsl=0 cgdl=0 ckappas=0.6 ckappad=0.6 clc=1e-7 cle=0.6
+ cjs=8.0000e-04 cjd=8.0000e-04 mjs=0.35 mjd=0.35
+ pbs=0.9249 pbd=0.9249
+ cjsws=2.000e-10 cjswd=2.000e-10 mjsws=0.25 mjswd=0.25
+ pbsws=0.8 pbswd=0.8
+ cjswgs=1.800e-10 cjswgd=1.800e-10 mjswgs=0.25 mjswgd=0.25
+ pbswgs=0.8 pbswgd=0.8
+ jss=1e-7 jsws=1e-13 njs=1.0 xtis=3.0
+ fnoimod=1 tnoimod=1
+ em=4.1e7 af=1 ef=1 kf=0 ntnoi=1.0
+ tnom=27 ute=-1.5 kt1=-0.11 kt1l=0 kt2=0.022 ua1=1e-9 ub1=-1e-18
+ uc1=0 at=3.3e4 prt=0

.MODEL PNPS_MODEL PNP LEVEL=1 IS=5E-18 ISE=5E-16 NE=3 BF=5 RE=1 RB=50 RC=10
+IKF=5E-4 VAF=80 VAR=10 XTB=1 XTI=3 EG=1.2

.subckt nmos18 d g s b w=1u l=0.18u
m1 d g s b NMOS18_MODEL w='w' l='l' 
+ad='w*0.4u' as='w*0.4u' pd='2*(w+0.4u)' ps='2*(w+0.4u)' nrd='0.4u/w' nrs='0.4u/w'
.ends

.subckt pmos18 d g s b w=1u l=0.18u
m1 d g s b PMOS18_MODEL w='w' l='l' 
+ad='w*0.4u' as='w*0.4u' pd='2*(w+0.4u)' ps='2*(w+0.4u)' nrd='0.4u/w' nrs='0.4u/w'
.ends

.subckt nmos33 d g s b w=1u l=0.35u
m1 d g s b NMOS33_MODEL w='w' l='l' 
+ad='w*0.4u' as='w*0.4u' pd='2*(w+0.4u)' ps='2*(w+0.4u)' nrd='0.4u/w' nrs='0.4u/w'
.ends

.subckt pmos33 d g s b w=1u l=0.35u
m1 d g s b PMOS33_MODEL w='w' l='l' 
+ad='w*0.4u' as='w*0.4u' pd='2*(w+0.4u)' ps='2*(w+0.4u)' nrd='0.4u/w' nrs='0.4u/w'
.ends

.subckt pnps c b e
q1 c b e PNPS_MODEL
.ends

.subckt rpp a b w=1u l=10u np=1 ns=1
r1 a b 'l/w*ns/np*310' tc1=1e-3
.ends

.subckt rm a b w=1u l=10u np=1 ns=1
r1 a b 'l/w*ns/np*0.1' tc1=4e-3
.ends

.subckt cmim top bot sub w=1u l=1u
c1 top bot '1f*w*l*1e12'
c2 bot sub '1f*0.01*w*l*1e12'
.ends
