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

.model nmos18_model nmos level=54
+ version=4.8.1 binunit=1 mobmod=0 capmod=2 rdsmod=0
+ fnoimod=1 tnoimod=0 igcmod=0 igbmod=0 diomod=1 rgatemod=0
+ tnom=27
+ toxe=4e-09 toxp=4e-09 toxm=4e-09 xj=1e-07
+ lint=1.2e-08 wint=1.5e-08
+ vth0=0.37782 k1=0.58 k2=0 k3=-5.06258
+ k3b=0 w0=2.5e-06 lpe0=9.90535e-08 lpeb=0
+ ndep=2.35e+17
+ dvt0=2.2 dvt1=0.54 dvt2=-0.01 dvt0w=0
+ dvt1w=0 dvt2w=0 dsub=0.383344 eta0=0.06
+ etab=-0.02
+ nfactor=2.08937 voff=-0.08 cdsc=0.00024 cdscd=0
+ cdscb=0 cit=0
+ u0=0.038 ua=1.2e-09 ub=1e-18 uc=-4.65e-11
+ vsat=100000 a0=1 a1=0 a2=1
+ ags=0 b0=0 b1=0 keta=-0.03
+ delta=0.01
+ rdsw=140 prwg=0 prwb=0 wr=1
+ pclm=1.3 pdiblc1=0.39 pdiblc2=0.00226916 pdiblcb=0
+ drout=0.56 pvag=0.1 pscbe1=1e+09 pscbe2=1e-09
+ cgso=6.71151e-10 cgdo=6.71151e-10 cgbo=1e-10
+ cjs=0.0009896 cjd=0.0009896 cjsws=2.394e-10 cjswd=2.394e-10
+ cjswgs=3.3e-10 cjswgd=3.3e-10 pbs=0.8 pbd=0.8
+ mjs=0.3737 mjd=0.3737 pbsws=0.8 pbswd=0.8
+ mjsws=0.1538 mjswd=0.1538
+ jss=1e-07 jsd=1e-07 jsws=1e-13 jswd=1e-13
+ noia=1.43172e+41 noib=7.15858e+25 noic=2.0044e+09 em=4.1e+07
+ ef=1 af=1 kf=0

.model pmos18_model pmos level=54
+ version=4.8.1 binunit=1 mobmod=0 capmod=2 rdsmod=0
+ fnoimod=1 tnoimod=0 igcmod=0 igbmod=0 diomod=1 rgatemod=0
+ tnom=27
+ toxe=4e-09 toxp=4e-09 toxm=4e-09 xj=1e-07
+ lint=1.2e-08 wint=1.5e-08
+ vth0=-0.378927 k1=0.615807 k2=0 k3=-5.22616
+ k3b=0 w0=2.5e-06 lpe0=9.85886e-08 lpeb=0
+ ndep=4.16e+17
+ dvt0=2.2 dvt1=0.54 dvt2=-0.01 dvt0w=0
+ dvt1w=0 dvt2w=0 dsub=0.474726 eta0=0.06
+ etab=-0.02
+ nfactor=2.03019 voff=-0.08 cdsc=0.00024 cdscd=0
+ cdscb=0 cit=0
+ u0=0.0136993 ua=1e-09 ub=1e-18 uc=-3.1e-11
+ vsat=165000 a0=1 a1=0 a2=1
+ ags=0 b0=0 b1=0 keta=-0.03
+ delta=0.01
+ rdsw=310 prwg=0 prwb=0 wr=1
+ pclm=1.3 pdiblc1=0.39 pdiblc2=0.00432897 pdiblcb=0
+ drout=0.56 pvag=0.1 pscbe1=1e+09 pscbe2=1e-09
+ cgso=5.23845e-10 cgdo=5.23845e-10 cgbo=1e-10
+ cjs=0.001157 cjd=0.001157 cjsws=1.902e-10 cjswd=1.902e-10
+ cjswgs=4.22e-10 cjswgd=4.22e-10 pbs=0.8444 pbd=0.8444
+ mjs=0.4064 mjd=0.4064 pbsws=0.8 pbswd=0.8
+ mjsws=0.3551 mjswd=0.3551
+ jss=1e-07 jsd=1e-07 jsws=1e-13 jswd=1e-13
+ noia=3.59129e+40 noib=8.69093e+24 noic=1.59453e+08 em=4.1e+07
+ ef=1 af=1 kf=0

.model nmos33_model nmos level=54
+ version=4.8.1 binunit=1 mobmod=0 capmod=2 rdsmod=0
+ fnoimod=1 tnoimod=0 igcmod=0 igbmod=0 diomod=1 rgatemod=0
+ tnom=27
+ toxe=7.7e-09 toxp=7.7e-09 toxm=7.7e-09 xj=1e-07
+ lint=1.2e-08 wint=1.5e-08
+ vth0=0.500281 k1=0.6 k2=0 k3=-17.9898
+ k3b=0 w0=2.5e-06 lpe0=1.87394e-07 lpeb=0
+ ndep=2.2e+17
+ dvt0=2.2 dvt1=0.54 dvt2=-0.01 dvt0w=0
+ dvt1w=0 dvt2w=0 dsub=0.17598 eta0=0.06
+ etab=-0.02
+ nfactor=1.32633 voff=-0.08 cdsc=0.00024 cdscd=0
+ cdscb=0 cit=0
+ u0=0.0258659 ua=1.2e-09 ub=1e-18 uc=-4.65e-11
+ vsat=158000 a0=1 a1=0 a2=1
+ ags=0 b0=0 b1=0 keta=-0.03
+ delta=0.01
+ rdsw=1119.19 prwg=0 prwb=0 wr=1
+ pclm=1.3 pdiblc1=0.39 pdiblc2=0.00308554 pdiblcb=0
+ drout=0.56 pvag=0.1 pscbe1=1e+09 pscbe2=1e-09
+ cgso=2.16484e-10 cgdo=2.16484e-10 cgbo=1e-10
+ cjs=0.0009161 cjd=0.0009161 cjsws=3.326e-10 cjswd=3.326e-10
+ cjswgs=1.82e-10 cjswgd=1.82e-10 pbs=0.8 pbd=0.8
+ mjs=0.3473 mjd=0.3473 pbsws=0.8 pbswd=0.8
+ mjsws=0.1127 mjswd=0.1127
+ jss=1e-07 jsd=1e-07 jsws=1e-13 jswd=1e-13
+ noia=6.60947e+40 noib=3.30474e+25 noic=9.25326e+08 em=4.1e+07
+ ef=1 af=1 kf=0

.model pmos33_model pmos level=54
+ version=4.8.1 binunit=1 mobmod=0 capmod=2 rdsmod=0
+ fnoimod=1 tnoimod=0 igcmod=0 igbmod=0 diomod=1 rgatemod=0
+ tnom=27
+ toxe=7.7e-09 toxp=7.7e-09 toxm=7.7e-09 xj=1e-07
+ lint=1.2e-08 wint=1.5e-08
+ vth0=-0.747117 k1=0.404932 k2=0 k3=15.7067
+ k3b=0 w0=2.5e-06 lpe0=1.01056e-07 lpeb=0
+ ndep=8.52e+16
+ dvt0=2.2 dvt1=0.54 dvt2=-0.01 dvt0w=0
+ dvt1w=0 dvt2w=0 dsub=0.292225 eta0=0.06
+ etab=-0.02
+ nfactor=1.97148 voff=-0.08 cdsc=0.00024 cdscd=0
+ cdscb=0 cit=0
+ u0=0.0142059 ua=1.2e-09 ub=1e-18 uc=-3.1e-11
+ vsat=130000 a0=1 a1=0 a2=1
+ ags=0 b0=0 b1=0 keta=-0.03
+ delta=0.01
+ rdsw=4000 prwg=0 prwb=0 wr=1
+ pclm=1.3 pdiblc1=0.39 pdiblc2=0.00172873 pdiblcb=0
+ drout=0.56 pvag=0.1 pscbe1=1e+09 pscbe2=1e-09
+ cgso=2.44993e-10 cgdo=2.44993e-10 cgbo=1e-10
+ cjs=0.001413 cjd=0.001413 cjsws=2.972e-10 cjswd=2.972e-10
+ cjswgs=4.42e-11 cjswgd=4.42e-11 pbs=0.99 pbd=0.99
+ mjs=0.561 mjd=0.561 pbsws=0.99 pbswd=0.99
+ mjsws=0.3828 mjswd=0.3828
+ jss=1e-07 jsd=1e-07 jsws=1e-13 jswd=1e-13
+ noia=1.46924e+40 noib=3.55555e+24 noic=6.52341e+07 em=4.1e+07
+ ef=1 af=1 kf=0

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
