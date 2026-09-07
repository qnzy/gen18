v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N 220 -190 220 -160 {lab=n4}
N 280 -160 360 -160 {lab=n4}
N 360 -190 360 -160 {lab=n4}
N 280 60 280 80 {lab=GND}
N 20 80 280 80 {lab=GND}
N 20 60 20 80 {lab=GND}
N 0 30 20 30 {lab=GND}
N 0 30 0 80 {lab=GND}
N 0 80 20 80 {lab=GND}
N 280 30 300 30 {lab=GND}
N 280 80 300 80 {lab=GND}
N 300 -220 360 -220 {lab=GND}
N 300 30 300 80 {lab=GND}
N 360 -340 360 -250 {lab=n2}
N 220 -440 220 -420 {lab=vdd}
N 220 -440 360 -440 {lab=vdd}
N 360 -440 360 -420 {lab=vdd}
N 360 -390 380 -390 {lab=vdd}
N 380 -440 380 -390 {lab=vdd}
N 360 -440 380 -440 {lab=vdd}
N 200 -390 220 -390 {lab=vdd}
N 200 -440 200 -390 {lab=vdd}
N 200 -440 220 -440 {lab=vdd}
N 20 -440 200 -440 {lab=vdd}
N -100 -440 -100 -280 {lab=vdd}
N -100 80 -100 100 {lab=GND}
N -100 80 0 80 {lab=GND}
N 20 -440 20 -280 {lab=vdd}
N 80 30 240 30 {lab=n3}
N 20 -20 80 -20 {lab=n3}
N 80 -20 80 30 {lab=n3}
N 280 -390 320 -390 {lab=n2}
N 690 -440 690 -420 {lab=vdd}
N 280 -390 280 -340 {lab=n2}
N 280 -340 360 -340 {lab=n2}
N 620 -390 620 -320 {lab=n1}
N 690 60 690 80 {lab=GND}
N 690 30 710 30 {lab=GND}
N 710 30 710 80 {lab=GND}
N 690 80 710 80 {lab=GND}
N 630 -20 630 30 {lab=n3}
N 630 30 650 30 {lab=n3}
N 220 -160 280 -160 {lab=n4}
N 220 -220 300 -220 {lab=GND}
N -100 -440 20 -440 {lab=vdd}
N 60 30 80 30 {lab=n3}
N 260 -390 280 -390 {lab=n2}
N 360 -360 360 -340 {lab=n2}
N 220 -360 220 -320 {lab=n1}
N 620 -390 650 -390 {lab=n1}
N 220 -320 220 -250 {lab=n1}
N 620 -320 620 -300 {lab=n1}
N 620 -240 620 -220 {lab=vout}
N 690 -440 710 -440 {lab=vdd}
N 710 -440 710 -390 {lab=vdd}
N 690 -390 710 -390 {lab=vdd}
N 380 -440 690 -440 {lab=vdd}
N 220 -320 620 -320 {lab=n1}
N 80 -20 630 -20 {lab=n3}
N 300 80 690 80 {lab=GND}
N 620 -220 690 -220 {lab=vout}
N 480 -220 480 -190 {lab=vfb}
N 690 -360 690 -220 {lab=vout}
N 400 -220 480 -220 {lab=vfb}
N 480 -220 500 -220 {lab=vfb}
N 560 -220 620 -220 {lab=vout}
N 300 -220 300 30 {lab=GND}
N -100 -220 -100 80 {lab=GND}
N 20 -220 20 -20 {lab=n3}
N 280 -160 280 0 {lab=n4}
N 20 -20 20 0 {lab=n3}
N 690 -220 690 -0 {lab=vout}
C {gen18/nmos18.sym} 200 -220 0 0 {name=M1 model=nmos18 w=4u l=1u m=4 spiceprefix=x}
C {gen18/nmos18.sym} 380 -220 0 1 {name=M2 model=nmos18 w=4u l=1u m=4 spiceprefix=x}
C {gen18/nmos18.sym} 40 30 0 1 {name=M4 model=nmos18 w=0.5u l=2u m=1 spiceprefix=x}
C {gen18/pmos18.sym} 340 -390 0 0 {name=M5 model=pmos18 w=1u l=1.5u m=1 spiceprefix=x}
C {gen18/pmos18.sym} 240 -390 0 1 {name=M6 model=pmos18 w=1u l=1.5u m=1 spiceprefix=x}
C {devices/isource.sym} 20 -250 0 0 {name=I0 value=1u}
C {devices/vsource.sym} -100 -250 0 0 {name=V1 value=1.8 savecurrent=false}
C {devices/gnd.sym} -100 80 0 0 {name=l1 lab=GND}
C {devices/lab_pin.sym} -100 -440 2 1 {name=p1 sig_type=std_logic lab=vdd}
C {gen18/gen18models.sym} 770 -370 0 0 {name=gen18_models only_toplevel=true}
C {gen18/pmos18.sym} 670 -390 0 0 {name=M7 model=pmos18 w=2u l=0.5u m=4 spiceprefix=x}
C {devices/gnd.sym} 880 -60 0 0 {name=l2 lab=GND}
C {gen18/cmim.sym} 620 -270 0 0 {name=c1 model=cmim w=10u l=10u m=48 spiceprefix=x}
C {devices/gnd.sym} 600 -270 1 0 {name=l3 lab=GND}
C {gen18/nmos18.sym} 260 30 0 0 {name=M3 model=nmos18 w=0.5u l=2u m=2 spiceprefix=x}
C {gen18/nmos18.sym} 670 30 0 0 {name=M8 model=nmos18 w=0.5u l=2u m=10 spiceprefix=x}
C {devices/lab_pin.sym} 180 -220 2 1 {name=p2 sig_type=std_logic lab=vin}
C {devices/lab_pin.sym} 690 -300 0 1 {name=p3 sig_type=std_logic lab=vout}
C {devices/lab_pin.sym} 620 -340 0 1 {name=p4 sig_type=std_logic lab=n1}
C {devices/lab_pin.sym} 280 -360 0 1 {name=p5 sig_type=std_logic lab=n2}
C {devices/lab_pin.sym} 400 -20 3 1 {name=p6 sig_type=std_logic lab=n3}
C {devices/lab_pin.sym} 360 -160 0 1 {name=p7 sig_type=std_logic lab=n4}
C {devices/code_shown.sym} 780 -310 0 0 {name=cmd only_toplevel=true
format="tcleval( @value )"
value="
.save all
.tran 1n 30u
.ac dec 50 1 1G
"}
C {devices/vsource.sym} 880 -90 0 0 {name=V2 value="pwl 0 0.9 10u 0.9 \{10u+10n\} 0.95 20u 0.95 \{20u+10n\} 0.9 ac 1 0"}
C {devices/capa.sym} 800 -90 0 0 {name=CLOAD only_toplevel=true
m=1
value=10p}
C {devices/gnd.sym} 800 -60 0 0 {name=l4 lab=GND}
C {devices/lab_pin.sym} 800 -120 3 1 {name=p8 sig_type=std_logic lab=vout}
C {devices/res_ac.sym} 530 -220 1 0 {name=R1
value=0.1
ac=10G
m=1}
C {devices/res_ac.sym} 480 -160 2 0 {name=R2
value=10G
ac=0.1
m=1}
C {devices/capa.sym} 480 -100 0 0 {name=CLOAD1 only_toplevel=true
m=1
value=1}
C {devices/gnd.sym} 480 -70 0 0 {name=l5 lab=GND}
C {devices/lab_pin.sym} 440 -220 1 0 {name=p9 sig_type=std_logic lab=vfb}
C {devices/lab_pin.sym} 880 -120 3 1 {name=p10 sig_type=std_logic lab=vin}
