# GEN18

## Introduction
GEN18 is a minimal PDK of a generic 180nm CMOS process. 
It includes symbols for the **xschem** schematic editor. 

The model card (*mdl/gen18.inc*) is in **HSPICE** syntax and should 
directly work in most simulators (including **ngspice**). The file
can be included directly using an *.include* statement. 

The transistor models are derived from MOSIS wafer test reports. 
The other devices were added without reference and have simple
models. "NOIMOD=2" has been added to select the unified physical 
noise model of BSIM3, using the default parameters.

Note that this is frontend only. Nothing is included for layout, 
LVS, DRC etc.

## Installation
The **xschem** symbols are located in the *xschem/gen18* subdirectory. 
Add the *xschem* subdirectory to your *XSCHEM_LIBRARY_PATH*. 
Symbols will then be relative to this path (e.g. *gen18/nmos18.sym*).

The folder *xschem/gen18_examples* contains some example circuits.

When the *gen18/gen18models.sym* symbol is instantiated in a (top-level) 
schematic, it will include the model file in the netlist. For this to 
work the PDK structure needs to be kept. Specifically, the model needs
to be at "../../mdl/gen18.inc" relative to the symbol directory.


## Devices

All devices are subcircuits. For the transistors, they
are based on the models: NMOS18_MODEL, PMOS18_MODEL, NMOS33_MODEL,
PMOS33_MODEL, PNPS_MODEL.

* NMOS18  
  Parameters: w: width, l: length, m: multiplicity  
  1.8V thin oxide NMOS device.  
  Vth=0.42V, K=U0.Cox/2=172uA/V^2  
  Example: xm1 d g s b nmos18 w=1u l=0.5u

* PMOS18  
  Parameters: w: width, l: length, m: multiplicity  
  1.8V thin oxide PMOS device.  
  Vth=0.41V, K=U0.Cox/2=36uA/V^2  
  Example: xm1 d g s b pmos18 w=1u l=0.5u

* NMOS33  
  Parameters: w: width, l: length, m: multiplicity  
  3.3V thick oxide NMOS device.  
  Vth=0.51V, K=U0.Cox/2=93uA/V^2  
  Example: xm1 d g s b nmos33 w=1u l=0.5u

* PMOS33  
  Parameters: w: width, l: length, m: multiplicity  
  3.3V thick oxide PMOS device.  
  Vth=0.77V, K=U0.Cox/2=32uA/V^2  
  Example: xm1 d g s b pmos33 w=1u l=0.5u

* RPP  
  Parameters: w: width, l: length, np: parallel multiplicity, ns: series multiplicity  
  Unsalicided P+ poly resistor  
  Rsh=310 Ohm/square, TC1=1e-3  
  Example: xr1 n1 n2 rpp w=1u l=10u ns=10

* RM  
  Parameters: w: width, l: length, np: parallel multiplicity, ns: series multiplicity  
  Metal resistor  
  Rsh=0.1 Ohm/square, TC1=4e-3
  Example: xr1 n1 n2 rm w=1u l=10u np=2

* PNPS  
  Parameters: m: multiplicity  
  Substrate PNP, fixed area  
  Is=5e-18A, BF=5, IKF=5e-4A  
  Example: xq1 c b e pnps m=1

* CMIM  
  MIM Capacitor  
  Parameters: w: width, l: length, m: multiplicity  
  Ca=1fF/um^2
  1% parasitic bottom plate cap 
  Example: xc1 top bot sub cmim w=10u l=10u m=4

