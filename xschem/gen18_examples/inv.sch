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
C {gen18/nmos18.sym} 180 -210 0 0 {name=M1 model=nmos18 w=0.5u l=0.18u m=1}
C {gen18/pmos18.sym} 180 -320 0 0 {name=M2 model=pmos18 w=1u l=0.18u m=1}
C {devices/lab_pin.sym} 140 -270 0 0 {name=l1 sig_type=std_logic lab=in}
C {devices/lab_pin.sym} 200 -270 2 0 {name=l2 sig_type=std_logic lab=out}
C {devices/lab_pin.sym} 200 -370 1 0 {name=l3 sig_type=std_logic lab=vdd}
C {devices/vsource.sym} 360 -190 0 0 {name=V1 value=1.8}
C {devices/lab_pin.sym} 360 -220 1 0 {name=l5 sig_type=std_logic lab=vdd}
C {devices/gnd.sym} 360 -160 0 0 {name=l4 lab=GND}
C {devices/gnd.sym} 200 -160 0 0 {name=l6 lab=GND}
C {devices/vsource.sym} 480 -190 0 0 {name=V2 value="pwl 0 0 1n 0 \{1n+10p\} 1.8 2n 1.8 \{2n+10p\} 0"}
C {devices/lab_pin.sym} 480 -220 1 0 {name=l7 sig_type=std_logic lab=in}
C {devices/gnd.sym} 480 -160 0 0 {name=l8 lab=GND}
C {devices/code_shown.sym} 340 -360 0 0 {name=cmd only_toplevel=true
format="tcleval( @value )"
value="
.include [xschem get current_dirname]/../../mdl/gen18.inc
.save all
.tran 10p 3n
"}
