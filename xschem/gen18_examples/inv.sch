v {xschem version=3.4.8RC file_version=1.3}
G {}
K {}
V {}
S {}
F {}
E {}
N 200 -290 200 -240 {lab=out}
N 200 -180 200 -160 {lab=GND}
N 200 -210 220 -210 {lab=GND}
N 220 -210 220 -160 {lab=GND}
N 200 -160 220 -160 {lab=GND}
N 200 -320 220 -320 {lab=vdd}
N 220 -370 220 -320 {lab=vdd}
N 200 -370 220 -370 {lab=vdd}
N 200 -370 200 -350 {lab=vdd}
N 140 -320 160 -320 {lab=in}
N 140 -320 140 -210 {lab=in}
N 140 -210 160 -210 {lab=in}
N 310 -200 310 -170 {lab=GND}
N 310 -170 330 -170 {lab=GND}
N 330 -260 330 -230 {lab=out}
N 200 -260 330 -260 {lab=out}
C {devices/lab_pin.sym} 140 -270 0 0 {name=l1 sig_type=std_logic lab=in}
C {devices/lab_pin.sym} 200 -270 2 0 {name=l2 sig_type=std_logic lab=out}
C {devices/lab_pin.sym} 200 -370 1 0 {name=l3 sig_type=std_logic lab=vdd}
C {devices/vsource.sym} 420 -190 0 0 {name=V1 value=3.3}
C {devices/lab_pin.sym} 420 -220 1 0 {name=l5 sig_type=std_logic lab=vdd}
C {devices/gnd.sym} 420 -160 0 0 {name=l4 lab=GND}
C {devices/gnd.sym} 200 -160 0 0 {name=l6 lab=GND}
C {devices/vsource.sym} 540 -190 0 0 {name=V2 value="pwl 0 0 1n 0 \{1n+10p\} 3.3 4n 3.3 \{4n+10p\} 0"}
C {devices/lab_pin.sym} 540 -220 1 0 {name=l7 sig_type=std_logic lab=in}
C {devices/gnd.sym} 540 -160 0 0 {name=l8 lab=GND}
C {devices/code_shown.sym} 400 -360 0 0 {name=cmd only_toplevel=true
format="tcleval( @value )"
value="
.save all
.tran 10p 6n
"}
C {gen18/cmim.sym} 330 -200 0 0 {name=c1 model=cmim w=5u l=5u m=1 spiceprefix=x}
C {devices/gnd.sym} 330 -170 0 0 {name=l9 lab=GND}
C {gen18/nmos33.sym} 180 -210 0 0 {name=M1 model=nmos33 w=0.5u l=0.35u m=1 spiceprefix=x}
C {gen18/pmos33.sym} 180 -320 0 0 {name=M2 model=pmos33 w=1.4u l=0.35u m=1 spiceprefix=x}
C {gen18/gen18models.sym} 380 -400 0 0 {name=gen18_models only_toplevel=true}
