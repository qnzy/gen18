# GEN18

## Introduction
GEN18 is a minimal PDK of a generic 180nm CMOS process. 
It includes symbols for the **xschem** schematic editor. 

The model card (*mdl/gen18.inc*) is in **HSPICE** syntax and should 
directly work in most simulators (including **ngspice**). The file
can be included directly using an *.include* statement. 

The transistor models are taken from MOSIS wafer test reports. 
The reports can be found in the *doc/ref* directory.
The other devices were added without reference and have simple
models.

Note that the CMIM device does not have an associated model. The
symbol instantiates an ideal capacitor.


## Installation
The **xschem** symbols are located in the *xschem/gen18* subdirectory. 
Add the *xschem* subdirectory to your *XSCHEM_LIBRARY_PATH*. 
Symbols will then be relative to this path (e.g. *gen18/nmos18.sym*).

The symbols have been adapted from the default **xschem** device library.

The folder *xschem/gen18_examples* contains some example circuits.


## Devices

* NMOS18
  1.8V thin oxide NMOS device.  
  Vth=0.42V, K=U0.Cox/2=172uA/V^2  
  Example: m1 d g s b nmos18 w=1u l=0.5u

* PMOS18
  1.8V thin oxide PMOS device.  
  Vth=0.41V, K=U0.Cox/2=36uA/V^2  
  Example: m1 d g s b pmos18 w=1u l=0.5u

* NMOS33
  3.3V thick oxide NMOS device.  
  Vth=0.51V, K=U0.Cox/2=93uA/V^2  
  Example: m1 d g s b nmos33 w=1u l=0.5u

* PMOS33
  3.3V thick oxide PMOS device.  
  Vth=0.77V, K=U0.Cox/2=32uA/V^2  
  Example: m1 d g s b pmos33 w=1u l=0.5u

* RPP
  Unsalicided P+ poly resistor  
  Rsh=310 Ohm/square, TC1=1e-3  
  Example: r1 n1 n2 rpp w=1u l=10u m=1

* RM
  Metal resistor  
  Rsh=0.1 Ohm/square  
  Example: r1 n1 n2 rm w=1u l=10u m=1

* PNPS
  Substrate PNP  
  Is=5e-18A, BF=5, IKF=5e-4A  
  Example: Q1 c b e PNPS m=1

* CMIM
  MIM Capacitor  
  Ca=1fF/um^2  
  Example: c1 n1 n2 '10u\*10u\*1e-12\*1e-15' m=1

