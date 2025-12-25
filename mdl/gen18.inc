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
*

.MODEL NMOS18 NMOS (                                LEVEL   = 49
+VERSION = 3.1            TNOM    = 27             TOX     = 4E-9
+XJ      = 1E-7           NCH     = 2.3549E17      VTH0    = 0.3662648
+K1      = 0.5802748      K2      = 3.124029E-3    K3      = 1E-3
+K3B     = 3.3886871      W0      = 1E-7           NLX     = 1.766159E-7
+DVT0W   = 0              DVT1W   = 0              DVT2W   = 0
+DVT0    = 1.2312416      DVT1    = 0.3849841      DVT2    = 0.0161351
+U0      = 265.1889031    UA      = -1.506402E-9   UB      = 2.489393E-18
+UC      = 5.621884E-11   VSAT    = 1.017932E5     A0      = 2
+AGS     = 0.4543117      B0      = 3.433489E-7    B1      = 5E-6
+KETA    = -0.0127714     A1      = 1.158074E-3    A2      = 1
+RDSW    = 136.5582806    PRWG    = 0.5            PRWB    = -0.2
+WR      = 1              WINT    = 0              LINT    = 1.702415E-8
+XL      = 0              XW      = -1E-8          DWG     = -4.211574E-9
+DWB     = 1.107719E-8    VOFF    = -0.0948017     NFACTOR = 2.1860065
+CIT     = 0              CDSC    = 2.4E-4         CDSCD   = 0
+CDSCB   = 0              ETA0    = 3.335516E-3    ETAB    = 6.028975E-5
+DSUB    = 0.0214781      PCLM    = 0.6602119      PDIBLC1 = 0.1605325
+PDIBLC2 = 3.287142E-3    PDIBLCB = -0.1           DROUT   = 0.7917811
+PSCBE1  = 6.420235E9     PSCBE2  = 4.122516E-9    PVAG    = 0.0347169
+DELTA   = 0.01           RSH     = 6.6            MOBMOD  = 1
+PRT     = 0              UTE     = -1.5           KT1     = -0.11
+KT1L    = 0              KT2     = 0.022          UA1     = 4.31E-9
+UB1     = -7.61E-18      UC1     = -5.6E-11       AT      = 3.3E4
+WL      = 0              WLN     = 1              WW      = 0
+WWN     = 1              WWL     = 0              LL      = 0
+LLN     = 1              LW      = 0              LWN     = 1
+LWL     = 0              CAPMOD  = 2              XPART   = 0.5
+CGDO    = 8.06E-10       CGSO    = 8.06E-10       CGBO    = 1E-12
+CJ      = 9.895609E-4    PB      = 0.8            MJ      = 0.3736889
+CJSW    = 2.393608E-10   PBSW    = 0.8            MJSW    = 0.1537892
+CJSWG   = 3.3E-10        PBSWG   = 0.8            MJSWG   = 0.1537892
+CF      = 0              PVTH0   = -1.73163E-3    PRDSW   = -1.4173554
+PK2     = 1.600729E-3    WKETA   = 1.601517E-3    LKETA   = -3.255127E-3
+PU0     = 5.2024473      PUA     = 1.584315E-12   PUB     = 7.446142E-25
+PVSAT   = 1.686297E3     PETA0   = 1.001594E-4    PKETA   = -2.039532E-3    )

.MODEL PMOS18 PMOS (                                LEVEL   = 49
+VERSION = 3.1            TNOM    = 27             TOX     = 4E-9
+XJ      = 1E-7           NCH     = 4.1589E17      VTH0    = -0.3708038
+K1      = 0.5895473      K2      = 0.0235946      K3      = 0
+K3B     = 13.8642028     W0      = 1E-6           NLX     = 1.517201E-7
+DVT0W   = 0              DVT1W   = 0              DVT2W   = 0
+DVT0    = 0.7885088      DVT1    = 0.2564577      DVT2    = 0.1
+U0      = 103.0478426    UA      = 1.049312E-9    UB      = 2.545758E-21
+UC      = -1E-10         VSAT    = 1.645114E5     A0      = 1.627879
+AGS     = 0.3295499      B0      = 5.207699E-7    B1      = 1.370868E-6
+KETA    = 0.0296157      A1      = 0.4449009      A2      = 0.3
+RDSW    = 306.5789827    PRWG    = 0.5            PRWB    = 0.5
+WR      = 1              WINT    = 0              LINT    = 2.761033E-8
+XL      = 0              XW      = -1E-8          DWG     = -2.433889E-8
+DWB     = -9.34648E-11   VOFF    = -0.0867009     NFACTOR = 2
+CIT     = 0              CDSC    = 2.4E-4         CDSCD   = 0
+CDSCB   = 0              ETA0    = 1.018318E-3    ETAB    = -3.206319E-4
+DSUB    = 1.094521E-3    PCLM    = 1.3281073      PDIBLC1 = 2.394169E-3
+PDIBLC2 = -3.255915E-6   PDIBLCB = -1E-3          DROUT   = 0
+PSCBE1  = 4.881933E10    PSCBE2  = 5E-10          PVAG    = 2.0932623
+DELTA   = 0.01           RSH     = 7.5            MOBMOD  = 1
+PRT     = 0              UTE     = -1.5           KT1     = -0.11
+KT1L    = 0              KT2     = 0.022          UA1     = 4.31E-9
+UB1     = -7.61E-18      UC1     = -5.6E-11       AT      = 3.3E4
+WL      = 0              WLN     = 1              WW      = 0
+WWN     = 1              WWL     = 0              LL      = 0
+LLN     = 1              LW      = 0              LWN     = 1
+LWL     = 0              CAPMOD  = 2              XPART   = 0.5
+CGDO    = 6.52E-10       CGSO    = 6.52E-10       CGBO    = 1E-12
+CJ      = 1.157423E-3    PB      = 0.8444261      MJ      = 0.4063933
+CJSW    = 1.902456E-10   PBSW    = 0.8            MJSW    = 0.3550788
+CJSWG   = 4.22E-10       PBSWG   = 0.8            MJSWG   = 0.3550788
+CF      = 0              PVTH0   = 1.4398E-3      PRDSW   = 0.5073407
+PK2     = 2.190431E-3    WKETA   = 0.0442978      LKETA   = -2.936093E-3
+PU0     = -0.9769623     PUA     = -4.34529E-11   PUB     = 1E-21
+PVSAT   = -50            PETA0   = 1.002762E-4    PKETA   = -6.740436E-3    )

.MODEL NMOS33 NMOS (                                LEVEL   = 49
+VERSION = 3.1            TNOM    = 27             TOX     = 7.7E-9
+XJ      = 1E-7           NCH     = 2.2E17         VTH0    = 0.4739035
+K1      = 0.5980711      K2      = 2.129508E-4    K3      = 89.1316051
+K3B     = -8.9451617     W0      = 3.267588E-5    NLX     = 2.389619E-7
+DVT0W   = 0              DVT1W   = 0              DVT2W   = 0
+DVT0    = 3.090362       DVT1    = 0.7427518      DVT2    = -0.1500347
+U0      = 385.646076     UA      = -4.6434E-10    UB      = 2.099304E-18
+UC      = 3.944494E-11   VSAT    = 1.584114E5     A0      = 1.1776486
+AGS     = 0.1836559      B0      = 7.523723E-7    B1      = 5E-6
+KETA    = 2.991409E-3    A1      = 0              A2      = 0.4259175
+RDSW    = 1.060209E3     PRWG    = -0.0949099     PRWB    = -0.0949472
+WR      = 1              WINT    = 1.45681E-7     LINT    = 0
+XL      = -5E-8          XW      = 1.5E-7         DWG     = -5.436366E-9
+DWB     = 4.655955E-9    VOFF    = -0.0938652     NFACTOR = 1.3714105
+CIT     = 0              CDSC    = 2.4E-4         CDSCD   = 0
+CDSCB   = 0              ETA0    = 0.9911705      ETAB    = 0.0151948
+DSUB    = 0.8661705      PCLM    = 1.6432607      PDIBLC1 = 1.509754E-3
+PDIBLC2 = 1.479156E-3    PDIBLCB = 0.1            DROUT   = 0
+PSCBE1  = 7.204688E8     PSCBE2  = 6.67778E-4     PVAG    = 0
+DELTA   = 0.01           RSH     = 80             MOBMOD  = 1
+PRT     = 0              UTE     = -1.5           KT1     = -0.11
+KT1L    = 0              KT2     = 0.022          UA1     = 4.31E-9
+UB1     = -7.61E-18      UC1     = -5.6E-11       AT      = 3.3E4
+WL      = 0              WLN     = 1              WW      = 0
+WWN     = 1              WWL     = 0              LL      = 0
+LLN     = 1              LW      = 0              LWN     = 1
+LWL     = 0              CAPMOD  = 2              XPART   = 0.5
+CGDO    = 3.1E-10        CGSO    = 3.1E-10        CGBO    = 1E-12
+CJ      = 9.161291E-4    PB      = 0.8            MJ      = 0.3472772
+CJSW    = 3.326018E-10   PBSW    = 0.8            MJSW    = 0.1126914
+CJSWG   = 1.82E-10       PBSWG   = 0.8            MJSWG   = 0.1126914
+CF      = 0              PVTH0   = -0.0227383     PRDSW   = -91.0475464
+PK2     = 2.618518E-3    WKETA   = -1.530315E-3   LKETA   = -7.775726E-4    )
*
.MODEL PMOS33 PMOS (                                LEVEL   = 49
+VERSION = 3.1            TNOM    = 27             TOX     = 7.7E-9
+XJ      = 1E-7           NCH     = 8.52E16        VTH0    = -0.7163484
+K1      = 0.408893       K2      = -4.658963E-3   K3      = 83.7384608
+K3B     = -5             W0      = 6.344557E-6    NLX     = 2.240363E-7
+DVT0W   = 0              DVT1W   = 0              DVT2W   = 0
+DVT0    = 1.6210073      DVT1    = 0.5540586      DVT2    = 4.208854E-4
+U0      = 152.1750181    UA      = 1.104005E-10   UB      = 1.869373E-18
+UC      = -1.72527E-11   VSAT    = 1.303949E5     A0      = 1.0511452
+AGS     = 0.3481503      B0      = 2.548932E-6    B1      = 5E-6
+KETA    = -6.220316E-3   A1      = 1.304949E-4    A2      = 1
+RDSW    = 4E3            PRWG    = -0.1517701     PRWB    = 0.0807754
+WR      = 1              WINT    = 1.472296E-7    LINT    = 0
+XL      = -5E-8          XW      = 1.5E-7         DWG     = -1.708734E-8
+DWB     = 9.651369E-9    VOFF    = -0.1353734     NFACTOR = 1.8615508
+CIT     = 0              CDSC    = 2.4E-4         CDSCD   = 0
+CDSCB   = 0              ETA0    = 0.0402356      ETAB    = 3.101076E-3
+DSUB    = 0.4414883      PCLM    = 4.0879121      PDIBLC1 = 1.7464E-4
+PDIBLC2 = 7.295654E-3    PDIBLCB = 0.049958       DROUT   = 9.989502E-4
+PSCBE1  = 7.963794E10    PSCBE2  = 5E-10          PVAG    = 4.3044365
+DELTA   = 0.01           RSH     = 148.4          MOBMOD  = 1
+PRT     = 0              UTE     = -1.5           KT1     = -0.11
+KT1L    = 0              KT2     = 0.022          UA1     = 4.31E-9
+UB1     = -7.61E-18      UC1     = -5.6E-11       AT      = 3.3E4
+WL      = 0              WLN     = 1              WW      = 0
+WWN     = 1              WWL     = 0              LL      = 0
+LLN     = 1              LW      = 0              LWN     = 1
+LWL     = 0              CAPMOD  = 2              XPART   = 0.5
+CGDO    = 3.38E-10       CGSO    = 3.38E-10       CGBO    = 1E-12
+CJ      = 1.413045E-3    PB      = 0.99           MJ      = 0.5610227
+CJSW    = 2.971607E-10   PBSW    = 0.99           MJSW    = 0.38282
+CJSWG   = 4.42E-11       PBSWG   = 0.99           MJSWG   = 0.38282
+CF      = 0              PVTH0   = 7.40325E-3     PRDSW   = -47.9669555
+PK2     = 2.016103E-3    WKETA   = 1.675253E-3    LKETA   = -3.463411E-3    )

.MODEL PNPS PNP LEVEL=1 IS=5E-18 ISE=5E-16 NE=3 BF=5 RE=1 RB=50 RC=10
+IKF=5E-4 VAF=80 VAR=10 XTB=1 XTI=3 EG=1.2

.MODEL RPP R RSH=310 TC1=1E-3

.MODEL RM R RSH=0.1

