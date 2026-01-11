v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
P 4 1 590 -580 {}
N 60 -440 80 -440 {lab=vdd}
N 60 -500 60 -440 {lab=vdd}
N 60 -500 80 -500 {lab=vdd}
N 80 -500 80 -470 {lab=vdd}
N 120 -440 200 -440 {lab=pb}
N 240 -500 240 -470 {lab=vdd}
N 80 -500 240 -500 {lab=vdd}
N 80 -500 240 -500 {lab=vdd}
N 240 -500 260 -500 {lab=vdd}
N 260 -500 260 -440 {lab=vdd}
N 240 -440 260 -440 {lab=vdd}
N 240 -390 240 -340 {lab=nb}
N 80 -410 80 -340 {lab=pb}
N 120 -310 200 -310 {lab=nb}
N 180 -360 180 -310 {lab=nb}
N 180 -360 240 -360 {lab=nb}
N 80 -380 140 -380 {lab=pb}
N 140 -440 140 -380 {lab=pb}
N 240 -410 240 -390 {lab=nb}
N 80 -60 80 -40 {lab=GND}
N 80 -40 240 -40 {lab=GND}
N 240 -60 240 -40 {lab=GND}
N 80 -280 80 -260 {lab=#net1}
N 80 -200 80 -180 {lab=#net2}
N 240 -280 240 -180 {lab=#net3}
N 140 -380 320 -380 {lab=pb}
N 320 -440 320 -380 {lab=pb}
N 320 -440 340 -440 {lab=pb}
N 260 -500 380 -500 {lab=vdd}
N 380 -500 380 -470 {lab=vdd}
N 380 -440 400 -440 {lab=vdd}
N 400 -500 400 -440 {lab=vdd}
N 380 -500 400 -500 {lab=vdd}
N 240 -40 380 -40 {lab=GND}
N 380 -60 380 -40 {lab=GND}
N 320 -120 340 -120 {lab=GND}
N 320 -120 320 -40 {lab=GND}
N 120 -120 140 -120 {lab=GND}
N 140 -120 140 -40 {lab=GND}
N 180 -120 200 -120 {lab=GND}
N 180 -120 180 -40 {lab=GND}
N 380 -410 380 -260 {lab=vbg}
N 380 -200 380 -180 {lab=#net4}
N 40 -310 80 -310 {lab=GND}
N 40 -310 40 -40 {lab=GND}
N 40 -40 80 -40 {lab=GND}
N 240 -310 280 -310 {lab=GND}
N 280 -310 280 -40 {lab=GND}
C {gen18/nmos18.sym} 220 -310 0 0 {name=M1 model=nmos18 w=2u l=2u m=1}
C {gen18/pmos18.sym} 100 -440 0 1 {name=M2 model=pmos18 w=1u l=2u m=1}
C {devices/vsource.sym} 540 -270 0 0 {name=V1 value=1.8}
C {devices/lab_pin.sym} 540 -300 1 0 {name=l5 sig_type=std_logic lab=vdd}
C {devices/gnd.sym} 540 -240 0 0 {name=l4 lab=GND}
C {devices/code_shown.sym} 620 -390 0 0 {name=cmd only_toplevel=true
format="tcleval( @value )"
value="
.probe i(r2)
.save all
.dc temp -40 150 10
"}
C {gen18/pmos18.sym} 220 -440 0 0 {name=M3 model=pmos18 w=1u l=2u m=1}
C {gen18/nmos18.sym} 100 -310 0 1 {name=M4 model=nmos18 w=2u l=2u m=1}
C {devices/lab_pin.sym} 60 -500 1 0 {name=l9 sig_type=std_logic lab=vdd}
C {gen18/pnps.sym} 220 -120 0 0 {name=Q1 model=PNPS m=1}
C {gen18/pnps.sym} 100 -120 0 1 {name=Q2 model=PNPS m=8}
C {gen18/rpp.sym} 80 -230 0 0 {name=R1 model=RPP W=1u L=300u m=1}
C {devices/gnd.sym} 40 -40 0 0 {name=l10 lab=GND}
C {gen18/pmos18.sym} 360 -440 0 0 {name=M5 model=pmos18 w=1u l=2u m=8}
C {gen18/pnps.sym} 360 -120 0 0 {name=Q3 model=PNPS m=1}
C {gen18/rpp.sym} 380 -230 0 0 {name=R2 model=RPP W=1u L=355u m=1}
C {devices/lab_pin.sym} 380 -300 2 0 {name=l11 sig_type=std_logic lab=vbg}
C {devices/lab_pin.sym} 140 -400 0 0 {name=l1 sig_type=std_logic lab=pb}
C {devices/lab_pin.sym} 180 -340 0 0 {name=l2 sig_type=std_logic lab=nb}
C {gen18/gen18models.sym} 620 -450 0 0 {name=gen18_models only_toplevel=true}
