/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.4 - Mon, 13 Apr 2015 14:13:01 ***/


#ifndef bjt504t
#define bjt504t

#include "ngspice/cktdefs.h"
#include "ngspice/ifsim.h"
#include "ngspice/gendefs.h"
#include "ngspice/complex.h"
#include "ngspice/noisedef.h"

#ifdef pnp
  #warning conflict: pnp is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'pnp' is also defined as a pragma.
  #warning conflict: Pragma 'pnp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'pnp' in module 'bjt504t'.
  #undef pnp
#endif
#ifdef npn
  #warning conflict: npn is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'npn' is also defined as a pragma.
  #warning conflict: Pragma 'npn' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'npn' in module 'bjt504t'.
  #undef npn
#endif
#ifdef LEVEL
  #warning conflict: LEVEL is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'LEVEL' is also defined as a pragma.
  #warning conflict: Pragma 'LEVEL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LEVEL' in module 'bjt504t'.
  #undef LEVEL
#endif
#ifdef TREF
  #warning conflict: TREF is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'TREF' is also defined as a pragma.
  #warning conflict: Pragma 'TREF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TREF' in module 'bjt504t'.
  #undef TREF
#endif
#ifdef DTA
  #warning conflict: DTA is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'DTA' is also defined as a pragma.
  #warning conflict: Pragma 'DTA' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DTA' in module 'bjt504t'.
  #undef DTA
#endif
#ifdef EXMOD
  #warning conflict: EXMOD is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'EXMOD' is also defined as a pragma.
  #warning conflict: Pragma 'EXMOD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'EXMOD' in module 'bjt504t'.
  #undef EXMOD
#endif
#ifdef EXPHI
  #warning conflict: EXPHI is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'EXPHI' is also defined as a pragma.
  #warning conflict: Pragma 'EXPHI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'EXPHI' in module 'bjt504t'.
  #undef EXPHI
#endif
#ifdef EXAVL
  #warning conflict: EXAVL is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'EXAVL' is also defined as a pragma.
  #warning conflict: Pragma 'EXAVL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'EXAVL' in module 'bjt504t'.
  #undef EXAVL
#endif
#ifdef IS
  #warning conflict: IS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IS' is also defined as a pragma.
  #warning conflict: Pragma 'IS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IS' in module 'bjt504t'.
  #undef IS
#endif
#ifdef IK
  #warning conflict: IK is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IK' is also defined as a pragma.
  #warning conflict: Pragma 'IK' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IK' in module 'bjt504t'.
  #undef IK
#endif
#ifdef VER
  #warning conflict: VER is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VER' is also defined as a pragma.
  #warning conflict: Pragma 'VER' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VER' in module 'bjt504t'.
  #undef VER
#endif
#ifdef VEF
  #warning conflict: VEF is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VEF' is also defined as a pragma.
  #warning conflict: Pragma 'VEF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VEF' in module 'bjt504t'.
  #undef VEF
#endif
#ifdef BF
  #warning conflict: BF is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'BF' is also defined as a pragma.
  #warning conflict: Pragma 'BF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BF' in module 'bjt504t'.
  #undef BF
#endif
#ifdef IBF
  #warning conflict: IBF is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IBF' is also defined as a pragma.
  #warning conflict: Pragma 'IBF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IBF' in module 'bjt504t'.
  #undef IBF
#endif
#ifdef MLF
  #warning conflict: MLF is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'MLF' is also defined as a pragma.
  #warning conflict: Pragma 'MLF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MLF' in module 'bjt504t'.
  #undef MLF
#endif
#ifdef XIBI
  #warning conflict: XIBI is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XIBI' is also defined as a pragma.
  #warning conflict: Pragma 'XIBI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XIBI' in module 'bjt504t'.
  #undef XIBI
#endif
#ifdef IZEB
  #warning conflict: IZEB is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IZEB' is also defined as a pragma.
  #warning conflict: Pragma 'IZEB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IZEB' in module 'bjt504t'.
  #undef IZEB
#endif
#ifdef NZEB
  #warning conflict: NZEB is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'NZEB' is also defined as a pragma.
  #warning conflict: Pragma 'NZEB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NZEB' in module 'bjt504t'.
  #undef NZEB
#endif
#ifdef BRI
  #warning conflict: BRI is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'BRI' is also defined as a pragma.
  #warning conflict: Pragma 'BRI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BRI' in module 'bjt504t'.
  #undef BRI
#endif
#ifdef IBR
  #warning conflict: IBR is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IBR' is also defined as a pragma.
  #warning conflict: Pragma 'IBR' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IBR' in module 'bjt504t'.
  #undef IBR
#endif
#ifdef VLR
  #warning conflict: VLR is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VLR' is also defined as a pragma.
  #warning conflict: Pragma 'VLR' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VLR' in module 'bjt504t'.
  #undef VLR
#endif
#ifdef XEXT
  #warning conflict: XEXT is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XEXT' is also defined as a pragma.
  #warning conflict: Pragma 'XEXT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XEXT' in module 'bjt504t'.
  #undef XEXT
#endif
#ifdef WAVL
  #warning conflict: WAVL is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'WAVL' is also defined as a pragma.
  #warning conflict: Pragma 'WAVL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WAVL' in module 'bjt504t'.
  #undef WAVL
#endif
#ifdef VAVL
  #warning conflict: VAVL is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VAVL' is also defined as a pragma.
  #warning conflict: Pragma 'VAVL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VAVL' in module 'bjt504t'.
  #undef VAVL
#endif
#ifdef SFH
  #warning conflict: SFH is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'SFH' is also defined as a pragma.
  #warning conflict: Pragma 'SFH' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SFH' in module 'bjt504t'.
  #undef SFH
#endif
#ifdef RE
  #warning conflict: RE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RE' is also defined as a pragma.
  #warning conflict: Pragma 'RE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RE' in module 'bjt504t'.
  #undef RE
#endif
#ifdef RBC
  #warning conflict: RBC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RBC' is also defined as a pragma.
  #warning conflict: Pragma 'RBC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RBC' in module 'bjt504t'.
  #undef RBC
#endif
#ifdef RBV
  #warning conflict: RBV is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RBV' is also defined as a pragma.
  #warning conflict: Pragma 'RBV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RBV' in module 'bjt504t'.
  #undef RBV
#endif
#ifdef RCC
  #warning conflict: RCC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RCC' is also defined as a pragma.
  #warning conflict: Pragma 'RCC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RCC' in module 'bjt504t'.
  #undef RCC
#endif
#ifdef RCV
  #warning conflict: RCV is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RCV' is also defined as a pragma.
  #warning conflict: Pragma 'RCV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RCV' in module 'bjt504t'.
  #undef RCV
#endif
#ifdef SCRCV
  #warning conflict: SCRCV is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'SCRCV' is also defined as a pragma.
  #warning conflict: Pragma 'SCRCV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SCRCV' in module 'bjt504t'.
  #undef SCRCV
#endif
#ifdef IHC
  #warning conflict: IHC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IHC' is also defined as a pragma.
  #warning conflict: Pragma 'IHC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IHC' in module 'bjt504t'.
  #undef IHC
#endif
#ifdef AXI
  #warning conflict: AXI is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'AXI' is also defined as a pragma.
  #warning conflict: Pragma 'AXI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AXI' in module 'bjt504t'.
  #undef AXI
#endif
#ifdef CJE
  #warning conflict: CJE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CJE' is also defined as a pragma.
  #warning conflict: Pragma 'CJE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJE' in module 'bjt504t'.
  #undef CJE
#endif
#ifdef VDE
  #warning conflict: VDE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VDE' is also defined as a pragma.
  #warning conflict: Pragma 'VDE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VDE' in module 'bjt504t'.
  #undef VDE
#endif
#ifdef PE
  #warning conflict: PE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'PE' is also defined as a pragma.
  #warning conflict: Pragma 'PE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PE' in module 'bjt504t'.
  #undef PE
#endif
#ifdef XCJE
  #warning conflict: XCJE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XCJE' is also defined as a pragma.
  #warning conflict: Pragma 'XCJE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XCJE' in module 'bjt504t'.
  #undef XCJE
#endif
#ifdef CBEO
  #warning conflict: CBEO is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CBEO' is also defined as a pragma.
  #warning conflict: Pragma 'CBEO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CBEO' in module 'bjt504t'.
  #undef CBEO
#endif
#ifdef CJC
  #warning conflict: CJC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CJC' is also defined as a pragma.
  #warning conflict: Pragma 'CJC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJC' in module 'bjt504t'.
  #undef CJC
#endif
#ifdef VDC
  #warning conflict: VDC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VDC' is also defined as a pragma.
  #warning conflict: Pragma 'VDC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VDC' in module 'bjt504t'.
  #undef VDC
#endif
#ifdef PC
  #warning conflict: PC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'PC' is also defined as a pragma.
  #warning conflict: Pragma 'PC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PC' in module 'bjt504t'.
  #undef PC
#endif
#ifdef XP
  #warning conflict: XP is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XP' is also defined as a pragma.
  #warning conflict: Pragma 'XP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XP' in module 'bjt504t'.
  #undef XP
#endif
#ifdef MC
  #warning conflict: MC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'MC' is also defined as a pragma.
  #warning conflict: Pragma 'MC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MC' in module 'bjt504t'.
  #undef MC
#endif
#ifdef XCJC
  #warning conflict: XCJC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XCJC' is also defined as a pragma.
  #warning conflict: Pragma 'XCJC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XCJC' in module 'bjt504t'.
  #undef XCJC
#endif
#ifdef RCBLX
  #warning conflict: RCBLX is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RCBLX' is also defined as a pragma.
  #warning conflict: Pragma 'RCBLX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RCBLX' in module 'bjt504t'.
  #undef RCBLX
#endif
#ifdef RCBLI
  #warning conflict: RCBLI is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RCBLI' is also defined as a pragma.
  #warning conflict: Pragma 'RCBLI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RCBLI' in module 'bjt504t'.
  #undef RCBLI
#endif
#ifdef CBCO
  #warning conflict: CBCO is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CBCO' is also defined as a pragma.
  #warning conflict: Pragma 'CBCO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CBCO' in module 'bjt504t'.
  #undef CBCO
#endif
#ifdef MTAU
  #warning conflict: MTAU is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'MTAU' is also defined as a pragma.
  #warning conflict: Pragma 'MTAU' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MTAU' in module 'bjt504t'.
  #undef MTAU
#endif
#ifdef TAUE
  #warning conflict: TAUE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'TAUE' is also defined as a pragma.
  #warning conflict: Pragma 'TAUE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TAUE' in module 'bjt504t'.
  #undef TAUE
#endif
#ifdef TAUB
  #warning conflict: TAUB is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'TAUB' is also defined as a pragma.
  #warning conflict: Pragma 'TAUB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TAUB' in module 'bjt504t'.
  #undef TAUB
#endif
#ifdef TEPI
  #warning conflict: TEPI is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'TEPI' is also defined as a pragma.
  #warning conflict: Pragma 'TEPI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TEPI' in module 'bjt504t'.
  #undef TEPI
#endif
#ifdef TAUR
  #warning conflict: TAUR is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'TAUR' is also defined as a pragma.
  #warning conflict: Pragma 'TAUR' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TAUR' in module 'bjt504t'.
  #undef TAUR
#endif
#ifdef DEG
  #warning conflict: DEG is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'DEG' is also defined as a pragma.
  #warning conflict: Pragma 'DEG' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DEG' in module 'bjt504t'.
  #undef DEG
#endif
#ifdef XREC
  #warning conflict: XREC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XREC' is also defined as a pragma.
  #warning conflict: Pragma 'XREC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XREC' in module 'bjt504t'.
  #undef XREC
#endif
#ifdef AQBO
  #warning conflict: AQBO is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'AQBO' is also defined as a pragma.
  #warning conflict: Pragma 'AQBO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AQBO' in module 'bjt504t'.
  #undef AQBO
#endif
#ifdef AE
  #warning conflict: AE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'AE' is also defined as a pragma.
  #warning conflict: Pragma 'AE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AE' in module 'bjt504t'.
  #undef AE
#endif
#ifdef AB
  #warning conflict: AB is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'AB' is also defined as a pragma.
  #warning conflict: Pragma 'AB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AB' in module 'bjt504t'.
  #undef AB
#endif
#ifdef AEPI
  #warning conflict: AEPI is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'AEPI' is also defined as a pragma.
  #warning conflict: Pragma 'AEPI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AEPI' in module 'bjt504t'.
  #undef AEPI
#endif
#ifdef AEX
  #warning conflict: AEX is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'AEX' is also defined as a pragma.
  #warning conflict: Pragma 'AEX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AEX' in module 'bjt504t'.
  #undef AEX
#endif
#ifdef AC
  #warning conflict: AC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'AC' is also defined as a pragma.
  #warning conflict: Pragma 'AC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AC' in module 'bjt504t'.
  #undef AC
#endif
#ifdef ACBL
  #warning conflict: ACBL is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'ACBL' is also defined as a pragma.
  #warning conflict: Pragma 'ACBL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ACBL' in module 'bjt504t'.
  #undef ACBL
#endif
#ifdef DVGBF
  #warning conflict: DVGBF is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'DVGBF' is also defined as a pragma.
  #warning conflict: Pragma 'DVGBF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DVGBF' in module 'bjt504t'.
  #undef DVGBF
#endif
#ifdef DVGBR
  #warning conflict: DVGBR is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'DVGBR' is also defined as a pragma.
  #warning conflict: Pragma 'DVGBR' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DVGBR' in module 'bjt504t'.
  #undef DVGBR
#endif
#ifdef VGB
  #warning conflict: VGB is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VGB' is also defined as a pragma.
  #warning conflict: Pragma 'VGB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VGB' in module 'bjt504t'.
  #undef VGB
#endif
#ifdef VGC
  #warning conflict: VGC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VGC' is also defined as a pragma.
  #warning conflict: Pragma 'VGC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VGC' in module 'bjt504t'.
  #undef VGC
#endif
#ifdef VGJ
  #warning conflict: VGJ is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VGJ' is also defined as a pragma.
  #warning conflict: Pragma 'VGJ' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VGJ' in module 'bjt504t'.
  #undef VGJ
#endif
#ifdef VGZEB
  #warning conflict: VGZEB is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VGZEB' is also defined as a pragma.
  #warning conflict: Pragma 'VGZEB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VGZEB' in module 'bjt504t'.
  #undef VGZEB
#endif
#ifdef AVGEB
  #warning conflict: AVGEB is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'AVGEB' is also defined as a pragma.
  #warning conflict: Pragma 'AVGEB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AVGEB' in module 'bjt504t'.
  #undef AVGEB
#endif
#ifdef TVGEB
  #warning conflict: TVGEB is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'TVGEB' is also defined as a pragma.
  #warning conflict: Pragma 'TVGEB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TVGEB' in module 'bjt504t'.
  #undef TVGEB
#endif
#ifdef DVGTE
  #warning conflict: DVGTE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'DVGTE' is also defined as a pragma.
  #warning conflict: Pragma 'DVGTE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DVGTE' in module 'bjt504t'.
  #undef DVGTE
#endif
#ifdef DAIS
  #warning conflict: DAIS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'DAIS' is also defined as a pragma.
  #warning conflict: Pragma 'DAIS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DAIS' in module 'bjt504t'.
  #undef DAIS
#endif
#ifdef AF
  #warning conflict: AF is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'AF' is also defined as a pragma.
  #warning conflict: Pragma 'AF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AF' in module 'bjt504t'.
  #undef AF
#endif
#ifdef KF
  #warning conflict: KF is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'KF' is also defined as a pragma.
  #warning conflict: Pragma 'KF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'KF' in module 'bjt504t'.
  #undef KF
#endif
#ifdef KFN
  #warning conflict: KFN is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'KFN' is also defined as a pragma.
  #warning conflict: Pragma 'KFN' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'KFN' in module 'bjt504t'.
  #undef KFN
#endif
#ifdef KAVL
  #warning conflict: KAVL is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'KAVL' is also defined as a pragma.
  #warning conflict: Pragma 'KAVL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'KAVL' in module 'bjt504t'.
  #undef KAVL
#endif
#ifdef ISS
  #warning conflict: ISS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'ISS' is also defined as a pragma.
  #warning conflict: Pragma 'ISS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ISS' in module 'bjt504t'.
  #undef ISS
#endif
#ifdef ICSS
  #warning conflict: ICSS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'ICSS' is also defined as a pragma.
  #warning conflict: Pragma 'ICSS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ICSS' in module 'bjt504t'.
  #undef ICSS
#endif
#ifdef IKS
  #warning conflict: IKS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IKS' is also defined as a pragma.
  #warning conflict: Pragma 'IKS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IKS' in module 'bjt504t'.
  #undef IKS
#endif
#ifdef CJS
  #warning conflict: CJS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CJS' is also defined as a pragma.
  #warning conflict: Pragma 'CJS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJS' in module 'bjt504t'.
  #undef CJS
#endif
#ifdef VDS
  #warning conflict: VDS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VDS' is also defined as a pragma.
  #warning conflict: Pragma 'VDS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VDS' in module 'bjt504t'.
  #undef VDS
#endif
#ifdef PS
  #warning conflict: PS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'PS' is also defined as a pragma.
  #warning conflict: Pragma 'PS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PS' in module 'bjt504t'.
  #undef PS
#endif
#ifdef VGS
  #warning conflict: VGS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VGS' is also defined as a pragma.
  #warning conflict: Pragma 'VGS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VGS' in module 'bjt504t'.
  #undef VGS
#endif
#ifdef AS
  #warning conflict: AS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'AS' is also defined as a pragma.
  #warning conflict: Pragma 'AS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AS' in module 'bjt504t'.
  #undef AS
#endif
#ifdef ASUB
  #warning conflict: ASUB is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'ASUB' is also defined as a pragma.
  #warning conflict: Pragma 'ASUB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ASUB' in module 'bjt504t'.
  #undef ASUB
#endif
#ifdef RTH
  #warning conflict: RTH is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RTH' is also defined as a pragma.
  #warning conflict: Pragma 'RTH' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RTH' in module 'bjt504t'.
  #undef RTH
#endif
#ifdef CTH
  #warning conflict: CTH is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CTH' is also defined as a pragma.
  #warning conflict: Pragma 'CTH' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CTH' in module 'bjt504t'.
  #undef CTH
#endif
#ifdef ATH
  #warning conflict: ATH is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'ATH' is also defined as a pragma.
  #warning conflict: Pragma 'ATH' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ATH' in module 'bjt504t'.
  #undef ATH
#endif
#ifdef MULT
  #warning conflict: MULT is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'MULT' is also defined as a pragma.
  #warning conflict: Pragma 'MULT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MULT' in module 'bjt504t'.
  #undef MULT
#endif
#ifdef TYPE
  #warning conflict: TYPE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'TYPE' is also defined as a pragma.
  #warning conflict: Pragma 'TYPE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TYPE' in module 'bjt504t'.
  #undef TYPE
#endif
#ifdef GMIN
  #warning conflict: GMIN is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'GMIN' is also defined as a pragma.
  #warning conflict: Pragma 'GMIN' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GMIN' in module 'bjt504t'.
  #undef GMIN
#endif
#ifdef _x
  #warning conflict: _x is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice '_x' is also defined as a pragma.
  #warning conflict: Pragma '_x' will be undefined.
  #warning conflict: You can solve the confict by renaming variable '_x' in module 'bjt504t'.
  #undef _x
#endif
#ifdef _x0
  #warning conflict: _x0 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice '_x0' is also defined as a pragma.
  #warning conflict: Pragma '_x0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable '_x0' in module 'bjt504t'.
  #undef _x0
#endif
#ifdef _a
  #warning conflict: _a is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice '_a' is also defined as a pragma.
  #warning conflict: Pragma '_a' will be undefined.
  #warning conflict: You can solve the confict by renaming variable '_a' in module 'bjt504t'.
  #undef _a
#endif
#ifdef _dxa
  #warning conflict: _dxa is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice '_dxa' is also defined as a pragma.
  #warning conflict: Pragma '_dxa' will be undefined.
  #warning conflict: You can solve the confict by renaming variable '_dxa' in module 'bjt504t'.
  #undef _dxa
#endif
#ifdef _circuit_gmin
  #warning conflict: _circuit_gmin is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice '_circuit_gmin' is also defined as a pragma.
  #warning conflict: Pragma '_circuit_gmin' will be undefined.
  #warning conflict: You can solve the confict by renaming variable '_circuit_gmin' in module 'bjt504t'.
  #undef _circuit_gmin
#endif
#ifdef An
  #warning conflict: An is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'An' is also defined as a pragma.
  #warning conflict: Pragma 'An' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'An' in module 'bjt504t'.
  #undef An
#endif
#ifdef Bn
  #warning conflict: Bn is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Bn' is also defined as a pragma.
  #warning conflict: Pragma 'Bn' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Bn' in module 'bjt504t'.
  #undef Bn
#endif
#ifdef Tk
  #warning conflict: Tk is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Tk' is also defined as a pragma.
  #warning conflict: Pragma 'Tk' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Tk' in module 'bjt504t'.
  #undef Tk
#endif
#ifdef Trk
  #warning conflict: Trk is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Trk' is also defined as a pragma.
  #warning conflict: Pragma 'Trk' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Trk' in module 'bjt504t'.
  #undef Trk
#endif
#ifdef tN
  #warning conflict: tN is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'tN' is also defined as a pragma.
  #warning conflict: Pragma 'tN' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tN' in module 'bjt504t'.
  #undef tN
#endif
#ifdef Tamb
  #warning conflict: Tamb is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Tamb' is also defined as a pragma.
  #warning conflict: Pragma 'Tamb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Tamb' in module 'bjt504t'.
  #undef Tamb
#endif
#ifdef Vt
  #warning conflict: Vt is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vt' is also defined as a pragma.
  #warning conflict: Pragma 'Vt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vt' in module 'bjt504t'.
  #undef Vt
#endif
#ifdef Vtr
  #warning conflict: Vtr is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vtr' is also defined as a pragma.
  #warning conflict: Pragma 'Vtr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vtr' in module 'bjt504t'.
  #undef Vtr
#endif
#ifdef VtINV
  #warning conflict: VtINV is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VtINV' is also defined as a pragma.
  #warning conflict: Pragma 'VtINV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VtINV' in module 'bjt504t'.
  #undef VtINV
#endif
#ifdef VtrINV
  #warning conflict: VtrINV is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VtrINV' is also defined as a pragma.
  #warning conflict: Pragma 'VtrINV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VtrINV' in module 'bjt504t'.
  #undef VtrINV
#endif
#ifdef VdtINV
  #warning conflict: VdtINV is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VdtINV' is also defined as a pragma.
  #warning conflict: Pragma 'VdtINV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VdtINV' in module 'bjt504t'.
  #undef VdtINV
#endif
#ifdef Vdt
  #warning conflict: Vdt is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vdt' is also defined as a pragma.
  #warning conflict: Pragma 'Vdt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vdt' in module 'bjt504t'.
  #undef Vdt
#endif
#ifdef UdeT
  #warning conflict: UdeT is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'UdeT' is also defined as a pragma.
  #warning conflict: Pragma 'UdeT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'UdeT' in module 'bjt504t'.
  #undef UdeT
#endif
#ifdef VDE_T
  #warning conflict: VDE_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VDE_T' is also defined as a pragma.
  #warning conflict: Pragma 'VDE_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VDE_T' in module 'bjt504t'.
  #undef VDE_T
#endif
#ifdef UdcT
  #warning conflict: UdcT is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'UdcT' is also defined as a pragma.
  #warning conflict: Pragma 'UdcT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'UdcT' in module 'bjt504t'.
  #undef UdcT
#endif
#ifdef VDC_T
  #warning conflict: VDC_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VDC_T' is also defined as a pragma.
  #warning conflict: Pragma 'VDC_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VDC_T' in module 'bjt504t'.
  #undef VDC_T
#endif
#ifdef CJE_T
  #warning conflict: CJE_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CJE_T' is also defined as a pragma.
  #warning conflict: Pragma 'CJE_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJE_T' in module 'bjt504t'.
  #undef CJE_T
#endif
#ifdef CJC_T
  #warning conflict: CJC_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CJC_T' is also defined as a pragma.
  #warning conflict: Pragma 'CJC_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJC_T' in module 'bjt504t'.
  #undef CJC_T
#endif
#ifdef XP_T
  #warning conflict: XP_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XP_T' is also defined as a pragma.
  #warning conflict: Pragma 'XP_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XP_T' in module 'bjt504t'.
  #undef XP_T
#endif
#ifdef CJCscale
  #warning conflict: CJCscale is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CJCscale' is also defined as a pragma.
  #warning conflict: Pragma 'CJCscale' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJCscale' in module 'bjt504t'.
  #undef CJCscale
#endif
#ifdef CJCscaleINV
  #warning conflict: CJCscaleINV is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CJCscaleINV' is also defined as a pragma.
  #warning conflict: Pragma 'CJCscaleINV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJCscaleINV' in module 'bjt504t'.
  #undef CJCscaleINV
#endif
#ifdef RE_T
  #warning conflict: RE_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RE_T' is also defined as a pragma.
  #warning conflict: Pragma 'RE_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RE_T' in module 'bjt504t'.
  #undef RE_T
#endif
#ifdef RBV_T
  #warning conflict: RBV_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RBV_T' is also defined as a pragma.
  #warning conflict: Pragma 'RBV_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RBV_T' in module 'bjt504t'.
  #undef RBV_T
#endif
#ifdef RBC_T
  #warning conflict: RBC_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RBC_T' is also defined as a pragma.
  #warning conflict: Pragma 'RBC_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RBC_T' in module 'bjt504t'.
  #undef RBC_T
#endif
#ifdef RCV_T
  #warning conflict: RCV_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RCV_T' is also defined as a pragma.
  #warning conflict: Pragma 'RCV_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RCV_T' in module 'bjt504t'.
  #undef RCV_T
#endif
#ifdef RCCxx_T
  #warning conflict: RCCxx_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RCCxx_T' is also defined as a pragma.
  #warning conflict: Pragma 'RCCxx_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RCCxx_T' in module 'bjt504t'.
  #undef RCCxx_T
#endif
#ifdef RCCex_T
  #warning conflict: RCCex_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RCCex_T' is also defined as a pragma.
  #warning conflict: Pragma 'RCCex_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RCCex_T' in module 'bjt504t'.
  #undef RCCex_T
#endif
#ifdef RCCin_T
  #warning conflict: RCCin_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RCCin_T' is also defined as a pragma.
  #warning conflict: Pragma 'RCCin_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RCCin_T' in module 'bjt504t'.
  #undef RCCin_T
#endif
#ifdef BF_T
  #warning conflict: BF_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'BF_T' is also defined as a pragma.
  #warning conflict: Pragma 'BF_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BF_T' in module 'bjt504t'.
  #undef BF_T
#endif
#ifdef BRI_T
  #warning conflict: BRI_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'BRI_T' is also defined as a pragma.
  #warning conflict: Pragma 'BRI_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BRI_T' in module 'bjt504t'.
  #undef BRI_T
#endif
#ifdef IS_T
  #warning conflict: IS_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IS_T' is also defined as a pragma.
  #warning conflict: Pragma 'IS_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IS_T' in module 'bjt504t'.
  #undef IS_T
#endif
#ifdef IK_T
  #warning conflict: IK_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IK_T' is also defined as a pragma.
  #warning conflict: Pragma 'IK_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IK_T' in module 'bjt504t'.
  #undef IK_T
#endif
#ifdef IBF_T
  #warning conflict: IBF_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IBF_T' is also defined as a pragma.
  #warning conflict: Pragma 'IBF_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IBF_T' in module 'bjt504t'.
  #undef IBF_T
#endif
#ifdef IBR_T
  #warning conflict: IBR_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IBR_T' is also defined as a pragma.
  #warning conflict: Pragma 'IBR_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IBR_T' in module 'bjt504t'.
  #undef IBR_T
#endif
#ifdef VEF_T
  #warning conflict: VEF_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VEF_T' is also defined as a pragma.
  #warning conflict: Pragma 'VEF_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VEF_T' in module 'bjt504t'.
  #undef VEF_T
#endif
#ifdef VER_T
  #warning conflict: VER_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VER_T' is also defined as a pragma.
  #warning conflict: Pragma 'VER_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VER_T' in module 'bjt504t'.
  #undef VER_T
#endif
#ifdef Izteb
  #warning conflict: Izteb is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Izteb' is also defined as a pragma.
  #warning conflict: Pragma 'Izteb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Izteb' in module 'bjt504t'.
  #undef Izteb
#endif
#ifdef IZEB_T
  #warning conflict: IZEB_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IZEB_T' is also defined as a pragma.
  #warning conflict: Pragma 'IZEB_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IZEB_T' in module 'bjt504t'.
  #undef IZEB_T
#endif
#ifdef E0BE
  #warning conflict: E0BE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'E0BE' is also defined as a pragma.
  #warning conflict: Pragma 'E0BE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'E0BE' in module 'bjt504t'.
  #undef E0BE
#endif
#ifdef dE0BE
  #warning conflict: dE0BE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'dE0BE' is also defined as a pragma.
  #warning conflict: Pragma 'dE0BE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dE0BE' in module 'bjt504t'.
  #undef dE0BE
#endif
#ifdef nZEB_T
  #warning conflict: nZEB_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'nZEB_T' is also defined as a pragma.
  #warning conflict: Pragma 'nZEB_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'nZEB_T' in module 'bjt504t'.
  #undef nZEB_T
#endif
#ifdef pow2_2mPE
  #warning conflict: pow2_2mPE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'pow2_2mPE' is also defined as a pragma.
  #warning conflict: Pragma 'pow2_2mPE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'pow2_2mPE' in module 'bjt504t'.
  #undef pow2_2mPE
#endif
#ifdef pow2_PEm2
  #warning conflict: pow2_PEm2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'pow2_PEm2' is also defined as a pragma.
  #warning conflict: Pragma 'pow2_PEm2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'pow2_PEm2' in module 'bjt504t'.
  #undef pow2_PEm2
#endif
#ifdef inv_VDE
  #warning conflict: inv_VDE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'inv_VDE' is also defined as a pragma.
  #warning conflict: Pragma 'inv_VDE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_VDE' in module 'bjt504t'.
  #undef inv_VDE
#endif
#ifdef inv_VDE_T
  #warning conflict: inv_VDE_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'inv_VDE_T' is also defined as a pragma.
  #warning conflict: Pragma 'inv_VDE_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_VDE_T' in module 'bjt504t'.
  #undef inv_VDE_T
#endif
#ifdef eZEB
  #warning conflict: eZEB is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eZEB' is also defined as a pragma.
  #warning conflict: Pragma 'eZEB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eZEB' in module 'bjt504t'.
  #undef eZEB
#endif
#ifdef edZEB
  #warning conflict: edZEB is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'edZEB' is also defined as a pragma.
  #warning conflict: Pragma 'edZEB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'edZEB' in module 'bjt504t'.
  #undef edZEB
#endif
#ifdef DZEB
  #warning conflict: DZEB is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'DZEB' is also defined as a pragma.
  #warning conflict: Pragma 'DZEB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DZEB' in module 'bjt504t'.
  #undef DZEB
#endif
#ifdef VGZEB_T
  #warning conflict: VGZEB_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VGZEB_T' is also defined as a pragma.
  #warning conflict: Pragma 'VGZEB_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VGZEB_T' in module 'bjt504t'.
  #undef VGZEB_T
#endif
#ifdef VGZEB_Tr
  #warning conflict: VGZEB_Tr is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VGZEB_Tr' is also defined as a pragma.
  #warning conflict: Pragma 'VGZEB_Tr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VGZEB_Tr' in module 'bjt504t'.
  #undef VGZEB_Tr
#endif
#ifdef inv_VGZEB_Tr
  #warning conflict: inv_VGZEB_Tr is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'inv_VGZEB_Tr' is also defined as a pragma.
  #warning conflict: Pragma 'inv_VGZEB_Tr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_VGZEB_Tr' in module 'bjt504t'.
  #undef inv_VGZEB_Tr
#endif
#ifdef CJE_T_div_CJE
  #warning conflict: CJE_T_div_CJE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CJE_T_div_CJE' is also defined as a pragma.
  #warning conflict: Pragma 'CJE_T_div_CJE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJE_T_div_CJE' in module 'bjt504t'.
  #undef CJE_T_div_CJE
#endif
#ifdef VGZEBOK
  #warning conflict: VGZEBOK is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VGZEBOK' is also defined as a pragma.
  #warning conflict: Pragma 'VGZEBOK' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VGZEBOK' in module 'bjt504t'.
  #undef VGZEBOK
#endif
#ifdef TAUE_T
  #warning conflict: TAUE_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'TAUE_T' is also defined as a pragma.
  #warning conflict: Pragma 'TAUE_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TAUE_T' in module 'bjt504t'.
  #undef TAUE_T
#endif
#ifdef TAUB_T
  #warning conflict: TAUB_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'TAUB_T' is also defined as a pragma.
  #warning conflict: Pragma 'TAUB_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TAUB_T' in module 'bjt504t'.
  #undef TAUB_T
#endif
#ifdef TEPI_T
  #warning conflict: TEPI_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'TEPI_T' is also defined as a pragma.
  #warning conflict: Pragma 'TEPI_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TEPI_T' in module 'bjt504t'.
  #undef TEPI_T
#endif
#ifdef TAUR_T
  #warning conflict: TAUR_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'TAUR_T' is also defined as a pragma.
  #warning conflict: Pragma 'TAUR_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TAUR_T' in module 'bjt504t'.
  #undef TAUR_T
#endif
#ifdef BnT
  #warning conflict: BnT is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'BnT' is also defined as a pragma.
  #warning conflict: Pragma 'BnT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BnT' in module 'bjt504t'.
  #undef BnT
#endif
#ifdef DEG_T
  #warning conflict: DEG_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'DEG_T' is also defined as a pragma.
  #warning conflict: Pragma 'DEG_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DEG_T' in module 'bjt504t'.
  #undef DEG_T
#endif
#ifdef Tk300
  #warning conflict: Tk300 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Tk300' is also defined as a pragma.
  #warning conflict: Pragma 'Tk300' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Tk300' in module 'bjt504t'.
  #undef Tk300
#endif
#ifdef RTH_Tamb
  #warning conflict: RTH_Tamb is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RTH_Tamb' is also defined as a pragma.
  #warning conflict: Pragma 'RTH_Tamb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RTH_Tamb' in module 'bjt504t'.
  #undef RTH_Tamb
#endif
#ifdef UdsT
  #warning conflict: UdsT is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'UdsT' is also defined as a pragma.
  #warning conflict: Pragma 'UdsT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'UdsT' in module 'bjt504t'.
  #undef UdsT
#endif
#ifdef VDS_T
  #warning conflict: VDS_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VDS_T' is also defined as a pragma.
  #warning conflict: Pragma 'VDS_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VDS_T' in module 'bjt504t'.
  #undef VDS_T
#endif
#ifdef CJS_T
  #warning conflict: CJS_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CJS_T' is also defined as a pragma.
  #warning conflict: Pragma 'CJS_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJS_T' in module 'bjt504t'.
  #undef CJS_T
#endif
#ifdef ISS_T
  #warning conflict: ISS_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'ISS_T' is also defined as a pragma.
  #warning conflict: Pragma 'ISS_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ISS_T' in module 'bjt504t'.
  #undef ISS_T
#endif
#ifdef ICSS_T
  #warning conflict: ICSS_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'ICSS_T' is also defined as a pragma.
  #warning conflict: Pragma 'ICSS_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ICSS_T' in module 'bjt504t'.
  #undef ICSS_T
#endif
#ifdef IKS_T
  #warning conflict: IKS_T is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IKS_T' is also defined as a pragma.
  #warning conflict: Pragma 'IKS_T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IKS_T' in module 'bjt504t'.
  #undef IKS_T
#endif
#ifdef invMULT
  #warning conflict: invMULT is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'invMULT' is also defined as a pragma.
  #warning conflict: Pragma 'invMULT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'invMULT' in module 'bjt504t'.
  #undef invMULT
#endif
#ifdef IS_TM
  #warning conflict: IS_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IS_TM' is also defined as a pragma.
  #warning conflict: Pragma 'IS_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IS_TM' in module 'bjt504t'.
  #undef IS_TM
#endif
#ifdef IK_TM
  #warning conflict: IK_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IK_TM' is also defined as a pragma.
  #warning conflict: Pragma 'IK_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IK_TM' in module 'bjt504t'.
  #undef IK_TM
#endif
#ifdef IBF_TM
  #warning conflict: IBF_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IBF_TM' is also defined as a pragma.
  #warning conflict: Pragma 'IBF_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IBF_TM' in module 'bjt504t'.
  #undef IBF_TM
#endif
#ifdef IBR_TM
  #warning conflict: IBR_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IBR_TM' is also defined as a pragma.
  #warning conflict: Pragma 'IBR_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IBR_TM' in module 'bjt504t'.
  #undef IBR_TM
#endif
#ifdef IHC_M
  #warning conflict: IHC_M is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IHC_M' is also defined as a pragma.
  #warning conflict: Pragma 'IHC_M' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IHC_M' in module 'bjt504t'.
  #undef IHC_M
#endif
#ifdef IZEB_TM
  #warning conflict: IZEB_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IZEB_TM' is also defined as a pragma.
  #warning conflict: Pragma 'IZEB_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IZEB_TM' in module 'bjt504t'.
  #undef IZEB_TM
#endif
#ifdef CJE_TM
  #warning conflict: CJE_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CJE_TM' is also defined as a pragma.
  #warning conflict: Pragma 'CJE_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJE_TM' in module 'bjt504t'.
  #undef CJE_TM
#endif
#ifdef CJC_TM
  #warning conflict: CJC_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CJC_TM' is also defined as a pragma.
  #warning conflict: Pragma 'CJC_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJC_TM' in module 'bjt504t'.
  #undef CJC_TM
#endif
#ifdef RE_TM
  #warning conflict: RE_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RE_TM' is also defined as a pragma.
  #warning conflict: Pragma 'RE_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RE_TM' in module 'bjt504t'.
  #undef RE_TM
#endif
#ifdef RBC_TM
  #warning conflict: RBC_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RBC_TM' is also defined as a pragma.
  #warning conflict: Pragma 'RBC_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RBC_TM' in module 'bjt504t'.
  #undef RBC_TM
#endif
#ifdef RBV_TM
  #warning conflict: RBV_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RBV_TM' is also defined as a pragma.
  #warning conflict: Pragma 'RBV_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RBV_TM' in module 'bjt504t'.
  #undef RBV_TM
#endif
#ifdef RCV_TM
  #warning conflict: RCV_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RCV_TM' is also defined as a pragma.
  #warning conflict: Pragma 'RCV_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RCV_TM' in module 'bjt504t'.
  #undef RCV_TM
#endif
#ifdef SCRCV_M
  #warning conflict: SCRCV_M is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'SCRCV_M' is also defined as a pragma.
  #warning conflict: Pragma 'SCRCV_M' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SCRCV_M' in module 'bjt504t'.
  #undef SCRCV_M
#endif
#ifdef RCCxx_TM
  #warning conflict: RCCxx_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RCCxx_TM' is also defined as a pragma.
  #warning conflict: Pragma 'RCCxx_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RCCxx_TM' in module 'bjt504t'.
  #undef RCCxx_TM
#endif
#ifdef RCCex_TM
  #warning conflict: RCCex_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RCCex_TM' is also defined as a pragma.
  #warning conflict: Pragma 'RCCex_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RCCex_TM' in module 'bjt504t'.
  #undef RCCex_TM
#endif
#ifdef RCCin_TM
  #warning conflict: RCCin_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RCCin_TM' is also defined as a pragma.
  #warning conflict: Pragma 'RCCin_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RCCin_TM' in module 'bjt504t'.
  #undef RCCin_TM
#endif
#ifdef GCCxx_TM
  #warning conflict: GCCxx_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'GCCxx_TM' is also defined as a pragma.
  #warning conflict: Pragma 'GCCxx_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GCCxx_TM' in module 'bjt504t'.
  #undef GCCxx_TM
#endif
#ifdef GCCex_TM
  #warning conflict: GCCex_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'GCCex_TM' is also defined as a pragma.
  #warning conflict: Pragma 'GCCex_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GCCex_TM' in module 'bjt504t'.
  #undef GCCex_TM
#endif
#ifdef GCCin_TM
  #warning conflict: GCCin_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'GCCin_TM' is also defined as a pragma.
  #warning conflict: Pragma 'GCCin_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GCCin_TM' in module 'bjt504t'.
  #undef GCCin_TM
#endif
#ifdef KF_M
  #warning conflict: KF_M is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'KF_M' is also defined as a pragma.
  #warning conflict: Pragma 'KF_M' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'KF_M' in module 'bjt504t'.
  #undef KF_M
#endif
#ifdef KFN_M
  #warning conflict: KFN_M is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'KFN_M' is also defined as a pragma.
  #warning conflict: Pragma 'KFN_M' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'KFN_M' in module 'bjt504t'.
  #undef KFN_M
#endif
#ifdef RTH_Tamb_M
  #warning conflict: RTH_Tamb_M is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'RTH_Tamb_M' is also defined as a pragma.
  #warning conflict: Pragma 'RTH_Tamb_M' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RTH_Tamb_M' in module 'bjt504t'.
  #undef RTH_Tamb_M
#endif
#ifdef CTH_M
  #warning conflict: CTH_M is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CTH_M' is also defined as a pragma.
  #warning conflict: Pragma 'CTH_M' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CTH_M' in module 'bjt504t'.
  #undef CTH_M
#endif
#ifdef ISS_TM
  #warning conflict: ISS_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'ISS_TM' is also defined as a pragma.
  #warning conflict: Pragma 'ISS_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ISS_TM' in module 'bjt504t'.
  #undef ISS_TM
#endif
#ifdef ICSS_TM
  #warning conflict: ICSS_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'ICSS_TM' is also defined as a pragma.
  #warning conflict: Pragma 'ICSS_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ICSS_TM' in module 'bjt504t'.
  #undef ICSS_TM
#endif
#ifdef IKS_TM
  #warning conflict: IKS_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'IKS_TM' is also defined as a pragma.
  #warning conflict: Pragma 'IKS_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IKS_TM' in module 'bjt504t'.
  #undef IKS_TM
#endif
#ifdef CJS_TM
  #warning conflict: CJS_TM is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CJS_TM' is also defined as a pragma.
  #warning conflict: Pragma 'CJS_TM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJS_TM' in module 'bjt504t'.
  #undef CJS_TM
#endif
#ifdef K0
  #warning conflict: K0 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'K0' is also defined as a pragma.
  #warning conflict: Pragma 'K0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'K0' in module 'bjt504t'.
  #undef K0
#endif
#ifdef Kw
  #warning conflict: Kw is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Kw' is also defined as a pragma.
  #warning conflict: Pragma 'Kw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Kw' in module 'bjt504t'.
  #undef Kw
#endif
#ifdef pW
  #warning conflict: pW is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'pW' is also defined as a pragma.
  #warning conflict: Pragma 'pW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'pW' in module 'bjt504t'.
  #undef pW
#endif
#ifdef Ec
  #warning conflict: Ec is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Ec' is also defined as a pragma.
  #warning conflict: Pragma 'Ec' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ec' in module 'bjt504t'.
  #undef Ec
#endif
#ifdef Ic1c2
  #warning conflict: Ic1c2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Ic1c2' is also defined as a pragma.
  #warning conflict: Pragma 'Ic1c2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ic1c2' in module 'bjt504t'.
  #undef Ic1c2
#endif
#ifdef Vqs_th
  #warning conflict: Vqs_th is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vqs_th' is also defined as a pragma.
  #warning conflict: Pragma 'Vqs_th' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vqs_th' in module 'bjt504t'.
  #undef Vqs_th
#endif
#ifdef Vqs
  #warning conflict: Vqs is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vqs' is also defined as a pragma.
  #warning conflict: Pragma 'Vqs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vqs' in module 'bjt504t'.
  #undef Vqs
#endif
#ifdef Iqs
  #warning conflict: Iqs is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Iqs' is also defined as a pragma.
  #warning conflict: Pragma 'Iqs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Iqs' in module 'bjt504t'.
  #undef Iqs
#endif
#ifdef alpha
  #warning conflict: alpha is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'alpha' is also defined as a pragma.
  #warning conflict: Pragma 'alpha' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alpha' in module 'bjt504t'.
  #undef alpha
#endif
#ifdef vyi
  #warning conflict: vyi is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'vyi' is also defined as a pragma.
  #warning conflict: Pragma 'vyi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vyi' in module 'bjt504t'.
  #undef vyi
#endif
#ifdef yi
  #warning conflict: yi is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'yi' is also defined as a pragma.
  #warning conflict: Pragma 'yi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'yi' in module 'bjt504t'.
  #undef yi
#endif
#ifdef xi_w
  #warning conflict: xi_w is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'xi_w' is also defined as a pragma.
  #warning conflict: Pragma 'xi_w' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xi_w' in module 'bjt504t'.
  #undef xi_w
#endif
#ifdef xi_w1
  #warning conflict: xi_w1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'xi_w1' is also defined as a pragma.
  #warning conflict: Pragma 'xi_w1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xi_w1' in module 'bjt504t'.
  #undef xi_w1
#endif
#ifdef gp0
  #warning conflict: gp0 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'gp0' is also defined as a pragma.
  #warning conflict: Pragma 'gp0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gp0' in module 'bjt504t'.
  #undef gp0
#endif
#ifdef gp02
  #warning conflict: gp02 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'gp02' is also defined as a pragma.
  #warning conflict: Pragma 'gp02' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gp02' in module 'bjt504t'.
  #undef gp02
#endif
#ifdef p0star
  #warning conflict: p0star is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'p0star' is also defined as a pragma.
  #warning conflict: Pragma 'p0star' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'p0star' in module 'bjt504t'.
  #undef p0star
#endif
#ifdef Vb2c2star
  #warning conflict: Vb2c2star is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vb2c2star' is also defined as a pragma.
  #warning conflict: Pragma 'Vb2c2star' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vb2c2star' in module 'bjt504t'.
  #undef Vb2c2star
#endif
#ifdef eVb2c2star
  #warning conflict: eVb2c2star is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eVb2c2star' is also defined as a pragma.
  #warning conflict: Pragma 'eVb2c2star' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eVb2c2star' in module 'bjt504t'.
  #undef eVb2c2star
#endif
#ifdef B1
  #warning conflict: B1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'B1' is also defined as a pragma.
  #warning conflict: Pragma 'B1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'B1' in module 'bjt504t'.
  #undef B1
#endif
#ifdef B2
  #warning conflict: B2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'B2' is also defined as a pragma.
  #warning conflict: Pragma 'B2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'B2' in module 'bjt504t'.
  #undef B2
#endif
#ifdef Vxi0
  #warning conflict: Vxi0 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vxi0' is also defined as a pragma.
  #warning conflict: Pragma 'Vxi0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vxi0' in module 'bjt504t'.
  #undef Vxi0
#endif
#ifdef Vch
  #warning conflict: Vch is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vch' is also defined as a pragma.
  #warning conflict: Pragma 'Vch' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vch' in module 'bjt504t'.
  #undef Vch
#endif
#ifdef Icap
  #warning conflict: Icap is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Icap' is also defined as a pragma.
  #warning conflict: Pragma 'Icap' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Icap' in module 'bjt504t'.
  #undef Icap
#endif
#ifdef pav
  #warning conflict: pav is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'pav' is also defined as a pragma.
  #warning conflict: Pragma 'pav' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'pav' in module 'bjt504t'.
  #undef pav
#endif
#ifdef Vfe
  #warning conflict: Vfe is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vfe' is also defined as a pragma.
  #warning conflict: Pragma 'Vfe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vfe' in module 'bjt504t'.
  #undef Vfe
#endif
#ifdef Vje
  #warning conflict: Vje is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vje' is also defined as a pragma.
  #warning conflict: Pragma 'Vje' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vje' in module 'bjt504t'.
  #undef Vje
#endif
#ifdef Vte
  #warning conflict: Vte is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vte' is also defined as a pragma.
  #warning conflict: Pragma 'Vte' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vte' in module 'bjt504t'.
  #undef Vte
#endif
#ifdef Vjunc
  #warning conflict: Vjunc is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vjunc' is also defined as a pragma.
  #warning conflict: Pragma 'Vjunc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vjunc' in module 'bjt504t'.
  #undef Vjunc
#endif
#ifdef bjc
  #warning conflict: bjc is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'bjc' is also defined as a pragma.
  #warning conflict: Pragma 'bjc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'bjc' in module 'bjt504t'.
  #undef bjc
#endif
#ifdef Vfc
  #warning conflict: Vfc is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vfc' is also defined as a pragma.
  #warning conflict: Pragma 'Vfc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vfc' in module 'bjt504t'.
  #undef Vfc
#endif
#ifdef Vjc
  #warning conflict: Vjc is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vjc' is also defined as a pragma.
  #warning conflict: Pragma 'Vjc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vjc' in module 'bjt504t'.
  #undef Vjc
#endif
#ifdef fI
  #warning conflict: fI is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'fI' is also defined as a pragma.
  #warning conflict: Pragma 'fI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fI' in module 'bjt504t'.
  #undef fI
#endif
#ifdef Vcv
  #warning conflict: Vcv is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vcv' is also defined as a pragma.
  #warning conflict: Pragma 'Vcv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vcv' in module 'bjt504t'.
  #undef Vcv
#endif
#ifdef Vtc
  #warning conflict: Vtc is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vtc' is also defined as a pragma.
  #warning conflict: Pragma 'Vtc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vtc' in module 'bjt504t'.
  #undef Vtc
#endif
#ifdef If0
  #warning conflict: If0 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'If0' is also defined as a pragma.
  #warning conflict: Pragma 'If0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'If0' in module 'bjt504t'.
  #undef If0
#endif
#ifdef f1
  #warning conflict: f1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'f1' is also defined as a pragma.
  #warning conflict: Pragma 'f1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'f1' in module 'bjt504t'.
  #undef f1
#endif
#ifdef f2
  #warning conflict: f2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'f2' is also defined as a pragma.
  #warning conflict: Pragma 'f2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'f2' in module 'bjt504t'.
  #undef f2
#endif
#ifdef n0
  #warning conflict: n0 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'n0' is also defined as a pragma.
  #warning conflict: Pragma 'n0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'n0' in module 'bjt504t'.
  #undef n0
#endif
#ifdef nB
  #warning conflict: nB is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'nB' is also defined as a pragma.
  #warning conflict: Pragma 'nB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'nB' in module 'bjt504t'.
  #undef nB
#endif
#ifdef q0I
  #warning conflict: q0I is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'q0I' is also defined as a pragma.
  #warning conflict: Pragma 'q0I' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'q0I' in module 'bjt504t'.
  #undef q0I
#endif
#ifdef q1I
  #warning conflict: q1I is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'q1I' is also defined as a pragma.
  #warning conflict: Pragma 'q1I' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'q1I' in module 'bjt504t'.
  #undef q1I
#endif
#ifdef qBI
  #warning conflict: qBI is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'qBI' is also defined as a pragma.
  #warning conflict: Pragma 'qBI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qBI' in module 'bjt504t'.
  #undef qBI
#endif
#ifdef Ir
  #warning conflict: Ir is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Ir' is also defined as a pragma.
  #warning conflict: Pragma 'Ir' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ir' in module 'bjt504t'.
  #undef Ir
#endif
#ifdef If
  #warning conflict: If is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'If' is also defined as a pragma.
  #warning conflict: Pragma 'If' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'If' in module 'bjt504t'.
  #undef If
#endif
#ifdef In
  #warning conflict: In is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'In' is also defined as a pragma.
  #warning conflict: Pragma 'In' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'In' in module 'bjt504t'.
  #undef In
#endif
#ifdef Xext1
  #warning conflict: Xext1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Xext1' is also defined as a pragma.
  #warning conflict: Pragma 'Xext1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Xext1' in module 'bjt504t'.
  #undef Xext1
#endif
#ifdef Ib1
  #warning conflict: Ib1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Ib1' is also defined as a pragma.
  #warning conflict: Pragma 'Ib1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ib1' in module 'bjt504t'.
  #undef Ib1
#endif
#ifdef Ib1_s
  #warning conflict: Ib1_s is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Ib1_s' is also defined as a pragma.
  #warning conflict: Pragma 'Ib1_s' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ib1_s' in module 'bjt504t'.
  #undef Ib1_s
#endif
#ifdef Ib2
  #warning conflict: Ib2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Ib2' is also defined as a pragma.
  #warning conflict: Pragma 'Ib2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ib2' in module 'bjt504t'.
  #undef Ib2
#endif
#ifdef Ib3
  #warning conflict: Ib3 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Ib3' is also defined as a pragma.
  #warning conflict: Pragma 'Ib3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ib3' in module 'bjt504t'.
  #undef Ib3
#endif
#ifdef Ibf0
  #warning conflict: Ibf0 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Ibf0' is also defined as a pragma.
  #warning conflict: Pragma 'Ibf0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ibf0' in module 'bjt504t'.
  #undef Ibf0
#endif
#ifdef Iex
  #warning conflict: Iex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Iex' is also defined as a pragma.
  #warning conflict: Pragma 'Iex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Iex' in module 'bjt504t'.
  #undef Iex
#endif
#ifdef g1
  #warning conflict: g1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'g1' is also defined as a pragma.
  #warning conflict: Pragma 'g1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'g1' in module 'bjt504t'.
  #undef g1
#endif
#ifdef g2
  #warning conflict: g2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'g2' is also defined as a pragma.
  #warning conflict: Pragma 'g2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'g2' in module 'bjt504t'.
  #undef g2
#endif
#ifdef pWex
  #warning conflict: pWex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'pWex' is also defined as a pragma.
  #warning conflict: Pragma 'pWex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'pWex' in module 'bjt504t'.
  #undef pWex
#endif
#ifdef nBex
  #warning conflict: nBex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'nBex' is also defined as a pragma.
  #warning conflict: Pragma 'nBex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'nBex' in module 'bjt504t'.
  #undef nBex
#endif
#ifdef Xg1
  #warning conflict: Xg1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Xg1' is also defined as a pragma.
  #warning conflict: Pragma 'Xg1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Xg1' in module 'bjt504t'.
  #undef Xg1
#endif
#ifdef XnBex
  #warning conflict: XnBex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XnBex' is also defined as a pragma.
  #warning conflict: Pragma 'XnBex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XnBex' in module 'bjt504t'.
  #undef XnBex
#endif
#ifdef XIMex
  #warning conflict: XIMex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XIMex' is also defined as a pragma.
  #warning conflict: Pragma 'XIMex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XIMex' in module 'bjt504t'.
  #undef XIMex
#endif
#ifdef XIMsub
  #warning conflict: XIMsub is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XIMsub' is also defined as a pragma.
  #warning conflict: Pragma 'XIMsub' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XIMsub' in module 'bjt504t'.
  #undef XIMsub
#endif
#ifdef Vex
  #warning conflict: Vex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vex' is also defined as a pragma.
  #warning conflict: Pragma 'Vex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vex' in module 'bjt504t'.
  #undef Vex
#endif
#ifdef VBex
  #warning conflict: VBex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'VBex' is also defined as a pragma.
  #warning conflict: Pragma 'VBex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBex' in module 'bjt504t'.
  #undef VBex
#endif
#ifdef Fex
  #warning conflict: Fex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Fex' is also defined as a pragma.
  #warning conflict: Pragma 'Fex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Fex' in module 'bjt504t'.
  #undef Fex
#endif
#ifdef XIex
  #warning conflict: XIex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XIex' is also defined as a pragma.
  #warning conflict: Pragma 'XIex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XIex' in module 'bjt504t'.
  #undef XIex
#endif
#ifdef Isub
  #warning conflict: Isub is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Isub' is also defined as a pragma.
  #warning conflict: Pragma 'Isub' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Isub' in module 'bjt504t'.
  #undef Isub
#endif
#ifdef XIsub
  #warning conflict: XIsub is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XIsub' is also defined as a pragma.
  #warning conflict: Pragma 'XIsub' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XIsub' in module 'bjt504t'.
  #undef XIsub
#endif
#ifdef Isf
  #warning conflict: Isf is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Isf' is also defined as a pragma.
  #warning conflict: Pragma 'Isf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Isf' in module 'bjt504t'.
  #undef Isf
#endif
#ifdef q0Q
  #warning conflict: q0Q is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'q0Q' is also defined as a pragma.
  #warning conflict: Pragma 'q0Q' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'q0Q' in module 'bjt504t'.
  #undef q0Q
#endif
#ifdef q1Q
  #warning conflict: q1Q is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'q1Q' is also defined as a pragma.
  #warning conflict: Pragma 'q1Q' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'q1Q' in module 'bjt504t'.
  #undef q1Q
#endif
#ifdef qBQ
  #warning conflict: qBQ is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'qBQ' is also defined as a pragma.
  #warning conflict: Pragma 'qBQ' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qBQ' in module 'bjt504t'.
  #undef qBQ
#endif
#ifdef Rb2
  #warning conflict: Rb2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Rb2' is also defined as a pragma.
  #warning conflict: Pragma 'Rb2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Rb2' in module 'bjt504t'.
  #undef Rb2
#endif
#ifdef Ib1b2
  #warning conflict: Ib1b2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Ib1b2' is also defined as a pragma.
  #warning conflict: Pragma 'Ib1b2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ib1b2' in module 'bjt504t'.
  #undef Ib1b2
#endif
#ifdef dVteVb2e1
  #warning conflict: dVteVb2e1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'dVteVb2e1' is also defined as a pragma.
  #warning conflict: Pragma 'dVteVb2e1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dVteVb2e1' in module 'bjt504t'.
  #undef dVteVb2e1
#endif
#ifdef dVteVje
  #warning conflict: dVteVje is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'dVteVje' is also defined as a pragma.
  #warning conflict: Pragma 'dVteVje' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dVteVje' in module 'bjt504t'.
  #undef dVteVje
#endif
#ifdef dVjeVb2e1
  #warning conflict: dVjeVb2e1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'dVjeVb2e1' is also defined as a pragma.
  #warning conflict: Pragma 'dVjeVb2e1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dVjeVb2e1' in module 'bjt504t'.
  #undef dVjeVb2e1
#endif
#ifdef dQteVb2e1
  #warning conflict: dQteVb2e1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'dQteVb2e1' is also defined as a pragma.
  #warning conflict: Pragma 'dQteVb2e1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dQteVb2e1' in module 'bjt504t'.
  #undef dQteVb2e1
#endif
#ifdef dQbeVb2e1
  #warning conflict: dQbeVb2e1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'dQbeVb2e1' is also defined as a pragma.
  #warning conflict: Pragma 'dQbeVb2e1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dQbeVb2e1' in module 'bjt504t'.
  #undef dQbeVb2e1
#endif
#ifdef dQeVb2e1
  #warning conflict: dQeVb2e1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'dQeVb2e1' is also defined as a pragma.
  #warning conflict: Pragma 'dQeVb2e1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dQeVb2e1' in module 'bjt504t'.
  #undef dQeVb2e1
#endif
#ifdef dn0Vb2e1
  #warning conflict: dn0Vb2e1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'dn0Vb2e1' is also defined as a pragma.
  #warning conflict: Pragma 'dn0Vb2e1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dn0Vb2e1' in module 'bjt504t'.
  #undef dn0Vb2e1
#endif
#ifdef dEdx0
  #warning conflict: dEdx0 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'dEdx0' is also defined as a pragma.
  #warning conflict: Pragma 'dEdx0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dEdx0' in module 'bjt504t'.
  #undef dEdx0
#endif
#ifdef xd
  #warning conflict: xd is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'xd' is also defined as a pragma.
  #warning conflict: Pragma 'xd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xd' in module 'bjt504t'.
  #undef xd
#endif
#ifdef Weff
  #warning conflict: Weff is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Weff' is also defined as a pragma.
  #warning conflict: Pragma 'Weff' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Weff' in module 'bjt504t'.
  #undef Weff
#endif
#ifdef Wd
  #warning conflict: Wd is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Wd' is also defined as a pragma.
  #warning conflict: Pragma 'Wd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Wd' in module 'bjt504t'.
  #undef Wd
#endif
#ifdef Eav
  #warning conflict: Eav is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Eav' is also defined as a pragma.
  #warning conflict: Pragma 'Eav' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Eav' in module 'bjt504t'.
  #undef Eav
#endif
#ifdef E0
  #warning conflict: E0 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'E0' is also defined as a pragma.
  #warning conflict: Pragma 'E0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'E0' in module 'bjt504t'.
  #undef E0
#endif
#ifdef Em
  #warning conflict: Em is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Em' is also defined as a pragma.
  #warning conflict: Pragma 'Em' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Em' in module 'bjt504t'.
  #undef Em
#endif
#ifdef SHw
  #warning conflict: SHw is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'SHw' is also defined as a pragma.
  #warning conflict: Pragma 'SHw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SHw' in module 'bjt504t'.
  #undef SHw
#endif
#ifdef Efi
  #warning conflict: Efi is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Efi' is also defined as a pragma.
  #warning conflict: Pragma 'Efi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Efi' in module 'bjt504t'.
  #undef Efi
#endif
#ifdef Ew
  #warning conflict: Ew is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Ew' is also defined as a pragma.
  #warning conflict: Pragma 'Ew' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ew' in module 'bjt504t'.
  #undef Ew
#endif
#ifdef lambda
  #warning conflict: lambda is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'lambda' is also defined as a pragma.
  #warning conflict: Pragma 'lambda' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'lambda' in module 'bjt504t'.
  #undef lambda
#endif
#ifdef Gem
  #warning conflict: Gem is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Gem' is also defined as a pragma.
  #warning conflict: Pragma 'Gem' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Gem' in module 'bjt504t'.
  #undef Gem
#endif
#ifdef Gmax
  #warning conflict: Gmax is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Gmax' is also defined as a pragma.
  #warning conflict: Pragma 'Gmax' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Gmax' in module 'bjt504t'.
  #undef Gmax
#endif
#ifdef Iavl
  #warning conflict: Iavl is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Iavl' is also defined as a pragma.
  #warning conflict: Pragma 'Iavl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Iavl' in module 'bjt504t'.
  #undef Iavl
#endif
#ifdef Icap_IHC
  #warning conflict: Icap_IHC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Icap_IHC' is also defined as a pragma.
  #warning conflict: Pragma 'Icap_IHC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Icap_IHC' in module 'bjt504t'.
  #undef Icap_IHC
#endif
#ifdef Tki
  #warning conflict: Tki is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Tki' is also defined as a pragma.
  #warning conflict: Pragma 'Tki' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Tki' in module 'bjt504t'.
  #undef Tki
#endif
#ifdef power
  #warning conflict: power is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'power' is also defined as a pragma.
  #warning conflict: Pragma 'power' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'power' in module 'bjt504t'.
  #undef power
#endif
#ifdef Qte
  #warning conflict: Qte is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qte' is also defined as a pragma.
  #warning conflict: Pragma 'Qte' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qte' in module 'bjt504t'.
  #undef Qte
#endif
#ifdef Vje_s
  #warning conflict: Vje_s is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vje_s' is also defined as a pragma.
  #warning conflict: Pragma 'Vje_s' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vje_s' in module 'bjt504t'.
  #undef Vje_s
#endif
#ifdef Qte_s
  #warning conflict: Qte_s is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qte_s' is also defined as a pragma.
  #warning conflict: Pragma 'Qte_s' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qte_s' in module 'bjt504t'.
  #undef Qte_s
#endif
#ifdef Qtc
  #warning conflict: Qtc is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qtc' is also defined as a pragma.
  #warning conflict: Pragma 'Qtc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qtc' in module 'bjt504t'.
  #undef Qtc
#endif
#ifdef Qb0
  #warning conflict: Qb0 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qb0' is also defined as a pragma.
  #warning conflict: Pragma 'Qb0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qb0' in module 'bjt504t'.
  #undef Qb0
#endif
#ifdef Qbe
  #warning conflict: Qbe is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qbe' is also defined as a pragma.
  #warning conflict: Pragma 'Qbe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qbe' in module 'bjt504t'.
  #undef Qbe
#endif
#ifdef Qbc
  #warning conflict: Qbc is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qbc' is also defined as a pragma.
  #warning conflict: Pragma 'Qbc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qbc' in module 'bjt504t'.
  #undef Qbc
#endif
#ifdef Qb1b2
  #warning conflict: Qb1b2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qb1b2' is also defined as a pragma.
  #warning conflict: Pragma 'Qb1b2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qb1b2' in module 'bjt504t'.
  #undef Qb1b2
#endif
#ifdef Qbe_qs
  #warning conflict: Qbe_qs is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qbe_qs' is also defined as a pragma.
  #warning conflict: Pragma 'Qbe_qs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qbe_qs' in module 'bjt504t'.
  #undef Qbe_qs
#endif
#ifdef Qbc_qs
  #warning conflict: Qbc_qs is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qbc_qs' is also defined as a pragma.
  #warning conflict: Pragma 'Qbc_qs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qbc_qs' in module 'bjt504t'.
  #undef Qbc_qs
#endif
#ifdef Vjcex
  #warning conflict: Vjcex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vjcex' is also defined as a pragma.
  #warning conflict: Pragma 'Vjcex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vjcex' in module 'bjt504t'.
  #undef Vjcex
#endif
#ifdef Vtexv
  #warning conflict: Vtexv is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vtexv' is also defined as a pragma.
  #warning conflict: Pragma 'Vtexv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vtexv' in module 'bjt504t'.
  #undef Vtexv
#endif
#ifdef Qtex
  #warning conflict: Qtex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qtex' is also defined as a pragma.
  #warning conflict: Pragma 'Qtex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qtex' in module 'bjt504t'.
  #undef Qtex
#endif
#ifdef XVjcex
  #warning conflict: XVjcex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XVjcex' is also defined as a pragma.
  #warning conflict: Pragma 'XVjcex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XVjcex' in module 'bjt504t'.
  #undef XVjcex
#endif
#ifdef XVtexv
  #warning conflict: XVtexv is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XVtexv' is also defined as a pragma.
  #warning conflict: Pragma 'XVtexv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XVtexv' in module 'bjt504t'.
  #undef XVtexv
#endif
#ifdef XQtex
  #warning conflict: XQtex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XQtex' is also defined as a pragma.
  #warning conflict: Pragma 'XQtex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XQtex' in module 'bjt504t'.
  #undef XQtex
#endif
#ifdef Vfs
  #warning conflict: Vfs is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vfs' is also defined as a pragma.
  #warning conflict: Pragma 'Vfs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vfs' in module 'bjt504t'.
  #undef Vfs
#endif
#ifdef Vjs
  #warning conflict: Vjs is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vjs' is also defined as a pragma.
  #warning conflict: Pragma 'Vjs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vjs' in module 'bjt504t'.
  #undef Vjs
#endif
#ifdef Qts
  #warning conflict: Qts is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qts' is also defined as a pragma.
  #warning conflict: Pragma 'Qts' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qts' in module 'bjt504t'.
  #undef Qts
#endif
#ifdef Qe0
  #warning conflict: Qe0 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qe0' is also defined as a pragma.
  #warning conflict: Pragma 'Qe0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qe0' in module 'bjt504t'.
  #undef Qe0
#endif
#ifdef Qe
  #warning conflict: Qe is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qe' is also defined as a pragma.
  #warning conflict: Pragma 'Qe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qe' in module 'bjt504t'.
  #undef Qe
#endif
#ifdef Qepi0
  #warning conflict: Qepi0 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qepi0' is also defined as a pragma.
  #warning conflict: Pragma 'Qepi0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qepi0' in module 'bjt504t'.
  #undef Qepi0
#endif
#ifdef Qepi
  #warning conflict: Qepi is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qepi' is also defined as a pragma.
  #warning conflict: Pragma 'Qepi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qepi' in module 'bjt504t'.
  #undef Qepi
#endif
#ifdef Xg2
  #warning conflict: Xg2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Xg2' is also defined as a pragma.
  #warning conflict: Pragma 'Xg2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Xg2' in module 'bjt504t'.
  #undef Xg2
#endif
#ifdef XpWex
  #warning conflict: XpWex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XpWex' is also defined as a pragma.
  #warning conflict: Pragma 'XpWex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XpWex' in module 'bjt504t'.
  #undef XpWex
#endif
#ifdef XQex
  #warning conflict: XQex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'XQex' is also defined as a pragma.
  #warning conflict: Pragma 'XQex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XQex' in module 'bjt504t'.
  #undef XQex
#endif
#ifdef Qex
  #warning conflict: Qex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Qex' is also defined as a pragma.
  #warning conflict: Pragma 'Qex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qex' in module 'bjt504t'.
  #undef Qex
#endif
#ifdef CBEO_M
  #warning conflict: CBEO_M is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CBEO_M' is also defined as a pragma.
  #warning conflict: Pragma 'CBEO_M' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CBEO_M' in module 'bjt504t'.
  #undef CBEO_M
#endif
#ifdef CBCO_M
  #warning conflict: CBCO_M is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'CBCO_M' is also defined as a pragma.
  #warning conflict: Pragma 'CBCO_M' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CBCO_M' in module 'bjt504t'.
  #undef CBCO_M
#endif
#ifdef Vb2c1
  #warning conflict: Vb2c1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vb2c1' is also defined as a pragma.
  #warning conflict: Pragma 'Vb2c1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vb2c1' in module 'bjt504t'.
  #undef Vb2c1
#endif
#ifdef Vb2c2
  #warning conflict: Vb2c2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vb2c2' is also defined as a pragma.
  #warning conflict: Pragma 'Vb2c2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vb2c2' in module 'bjt504t'.
  #undef Vb2c2
#endif
#ifdef Vb2e1
  #warning conflict: Vb2e1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vb2e1' is also defined as a pragma.
  #warning conflict: Pragma 'Vb2e1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vb2e1' in module 'bjt504t'.
  #undef Vb2e1
#endif
#ifdef Vb1e1
  #warning conflict: Vb1e1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vb1e1' is also defined as a pragma.
  #warning conflict: Pragma 'Vb1e1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vb1e1' in module 'bjt504t'.
  #undef Vb1e1
#endif
#ifdef Vb1b2
  #warning conflict: Vb1b2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vb1b2' is also defined as a pragma.
  #warning conflict: Pragma 'Vb1b2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vb1b2' in module 'bjt504t'.
  #undef Vb1b2
#endif
#ifdef Vb1c4
  #warning conflict: Vb1c4 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vb1c4' is also defined as a pragma.
  #warning conflict: Pragma 'Vb1c4' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vb1c4' in module 'bjt504t'.
  #undef Vb1c4
#endif
#ifdef Vc1c2
  #warning conflict: Vc1c2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vc1c2' is also defined as a pragma.
  #warning conflict: Pragma 'Vc1c2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vc1c2' in module 'bjt504t'.
  #undef Vc1c2
#endif
#ifdef Vc3c4
  #warning conflict: Vc3c4 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vc3c4' is also defined as a pragma.
  #warning conflict: Pragma 'Vc3c4' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vc3c4' in module 'bjt504t'.
  #undef Vc3c4
#endif
#ifdef Vc4c1
  #warning conflict: Vc4c1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vc4c1' is also defined as a pragma.
  #warning conflict: Pragma 'Vc4c1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vc4c1' in module 'bjt504t'.
  #undef Vc4c1
#endif
#ifdef Vsc1
  #warning conflict: Vsc1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vsc1' is also defined as a pragma.
  #warning conflict: Pragma 'Vsc1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vsc1' in module 'bjt504t'.
  #undef Vsc1
#endif
#ifdef Vsc3
  #warning conflict: Vsc3 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vsc3' is also defined as a pragma.
  #warning conflict: Pragma 'Vsc3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vsc3' in module 'bjt504t'.
  #undef Vsc3
#endif
#ifdef Vsc4
  #warning conflict: Vsc4 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vsc4' is also defined as a pragma.
  #warning conflict: Pragma 'Vsc4' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vsc4' in module 'bjt504t'.
  #undef Vsc4
#endif
#ifdef eVsc1
  #warning conflict: eVsc1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eVsc1' is also defined as a pragma.
  #warning conflict: Pragma 'eVsc1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eVsc1' in module 'bjt504t'.
  #undef eVsc1
#endif
#ifdef Vee1
  #warning conflict: Vee1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vee1' is also defined as a pragma.
  #warning conflict: Pragma 'Vee1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vee1' in module 'bjt504t'.
  #undef Vee1
#endif
#ifdef Vbb1
  #warning conflict: Vbb1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vbb1' is also defined as a pragma.
  #warning conflict: Pragma 'Vbb1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vbb1' in module 'bjt504t'.
  #undef Vbb1
#endif
#ifdef Vbc3
  #warning conflict: Vbc3 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vbc3' is also defined as a pragma.
  #warning conflict: Pragma 'Vbc3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vbc3' in module 'bjt504t'.
  #undef Vbc3
#endif
#ifdef Vcc3
  #warning conflict: Vcc3 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vcc3' is also defined as a pragma.
  #warning conflict: Pragma 'Vcc3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vcc3' in module 'bjt504t'.
  #undef Vcc3
#endif
#ifdef Vbe
  #warning conflict: Vbe is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vbe' is also defined as a pragma.
  #warning conflict: Pragma 'Vbe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vbe' in module 'bjt504t'.
  #undef Vbe
#endif
#ifdef Vbc
  #warning conflict: Vbc is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vbc' is also defined as a pragma.
  #warning conflict: Pragma 'Vbc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vbc' in module 'bjt504t'.
  #undef Vbc
#endif
#ifdef eVb2c2
  #warning conflict: eVb2c2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eVb2c2' is also defined as a pragma.
  #warning conflict: Pragma 'eVb2c2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eVb2c2' in module 'bjt504t'.
  #undef eVb2c2
#endif
#ifdef eVb2e1
  #warning conflict: eVb2e1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eVb2e1' is also defined as a pragma.
  #warning conflict: Pragma 'eVb2e1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eVb2e1' in module 'bjt504t'.
  #undef eVb2e1
#endif
#ifdef eVb1e1
  #warning conflict: eVb1e1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eVb1e1' is also defined as a pragma.
  #warning conflict: Pragma 'eVb1e1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eVb1e1' in module 'bjt504t'.
  #undef eVb1e1
#endif
#ifdef eVb1b2
  #warning conflict: eVb1b2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eVb1b2' is also defined as a pragma.
  #warning conflict: Pragma 'eVb1b2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eVb1b2' in module 'bjt504t'.
  #undef eVb1b2
#endif
#ifdef eVb1c4
  #warning conflict: eVb1c4 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eVb1c4' is also defined as a pragma.
  #warning conflict: Pragma 'eVb1c4' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eVb1c4' in module 'bjt504t'.
  #undef eVb1c4
#endif
#ifdef eVbc3
  #warning conflict: eVbc3 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eVbc3' is also defined as a pragma.
  #warning conflict: Pragma 'eVbc3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eVbc3' in module 'bjt504t'.
  #undef eVbc3
#endif
#ifdef eVb1c4VDC
  #warning conflict: eVb1c4VDC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eVb1c4VDC' is also defined as a pragma.
  #warning conflict: Pragma 'eVb1c4VDC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eVb1c4VDC' in module 'bjt504t'.
  #undef eVb1c4VDC
#endif
#ifdef eVb2c2VDC
  #warning conflict: eVb2c2VDC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eVb2c2VDC' is also defined as a pragma.
  #warning conflict: Pragma 'eVb2c2VDC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eVb2c2VDC' in module 'bjt504t'.
  #undef eVb2c2VDC
#endif
#ifdef eVbc3VDC
  #warning conflict: eVbc3VDC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eVbc3VDC' is also defined as a pragma.
  #warning conflict: Pragma 'eVbc3VDC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eVbc3VDC' in module 'bjt504t'.
  #undef eVbc3VDC
#endif
#ifdef eVb2c1VDC
  #warning conflict: eVb2c1VDC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eVb2c1VDC' is also defined as a pragma.
  #warning conflict: Pragma 'eVb2c1VDC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eVb2c1VDC' in module 'bjt504t'.
  #undef eVb2c1VDC
#endif
#ifdef lntN
  #warning conflict: lntN is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'lntN' is also defined as a pragma.
  #warning conflict: Pragma 'lntN' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'lntN' in module 'bjt504t'.
  #undef lntN
#endif
#ifdef x
  #warning conflict: x is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'x' is also defined as a pragma.
  #warning conflict: Pragma 'x' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'x' in module 'bjt504t'.
  #undef x
#endif
#ifdef y
  #warning conflict: y is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'y' is also defined as a pragma.
  #warning conflict: Pragma 'y' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'y' in module 'bjt504t'.
  #undef y
#endif
#ifdef dxa
  #warning conflict: dxa is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'dxa' is also defined as a pragma.
  #warning conflict: Pragma 'dxa' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dxa' in module 'bjt504t'.
  #undef dxa
#endif
#ifdef sqr_arg
  #warning conflict: sqr_arg is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'sqr_arg' is also defined as a pragma.
  #warning conflict: Pragma 'sqr_arg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sqr_arg' in module 'bjt504t'.
  #undef sqr_arg
#endif
#ifdef eps2
  #warning conflict: eps2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eps2' is also defined as a pragma.
  #warning conflict: Pragma 'eps2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eps2' in module 'bjt504t'.
  #undef eps2
#endif
#ifdef x2
  #warning conflict: x2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'x2' is also defined as a pragma.
  #warning conflict: Pragma 'x2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'x2' in module 'bjt504t'.
  #undef x2
#endif
#ifdef alpha1
  #warning conflict: alpha1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'alpha1' is also defined as a pragma.
  #warning conflict: Pragma 'alpha1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alpha1' in module 'bjt504t'.
  #undef alpha1
#endif
#ifdef vdif
  #warning conflict: vdif is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'vdif' is also defined as a pragma.
  #warning conflict: Pragma 'vdif' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdif' in module 'bjt504t'.
  #undef vdif
#endif
#ifdef Ic1c2_Iqs
  #warning conflict: Ic1c2_Iqs is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Ic1c2_Iqs' is also defined as a pragma.
  #warning conflict: Pragma 'Ic1c2_Iqs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ic1c2_Iqs' in module 'bjt504t'.
  #undef Ic1c2_Iqs
#endif
#ifdef gp0_help
  #warning conflict: gp0_help is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'gp0_help' is also defined as a pragma.
  #warning conflict: Pragma 'gp0_help' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gp0_help' in module 'bjt504t'.
  #undef gp0_help
#endif
#ifdef EmEav_Em
  #warning conflict: EmEav_Em is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'EmEav_Em' is also defined as a pragma.
  #warning conflict: Pragma 'EmEav_Em' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'EmEav_Em' in module 'bjt504t'.
  #undef EmEav_Em
#endif
#ifdef Vb2e1Vfe
  #warning conflict: Vb2e1Vfe is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vb2e1Vfe' is also defined as a pragma.
  #warning conflict: Pragma 'Vb2e1Vfe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vb2e1Vfe' in module 'bjt504t'.
  #undef Vb2e1Vfe
#endif
#ifdef termE
  #warning conflict: termE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'termE' is also defined as a pragma.
  #warning conflict: Pragma 'termE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'termE' in module 'bjt504t'.
  #undef termE
#endif
#ifdef termC
  #warning conflict: termC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'termC' is also defined as a pragma.
  #warning conflict: Pragma 'termC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'termC' in module 'bjt504t'.
  #undef termC
#endif
#ifdef Vex_bias
  #warning conflict: Vex_bias is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'Vex_bias' is also defined as a pragma.
  #warning conflict: Pragma 'Vex_bias' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vex_bias' in module 'bjt504t'.
  #undef Vex_bias
#endif
#ifdef eps_VDC
  #warning conflict: eps_VDC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'eps_VDC' is also defined as a pragma.
  #warning conflict: Pragma 'eps_VDC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eps_VDC' in module 'bjt504t'.
  #undef eps_VDC
#endif
#ifdef a_VDE
  #warning conflict: a_VDE is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'a_VDE' is also defined as a pragma.
  #warning conflict: Pragma 'a_VDE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'a_VDE' in module 'bjt504t'.
  #undef a_VDE
#endif
#ifdef a_VDC
  #warning conflict: a_VDC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'a_VDC' is also defined as a pragma.
  #warning conflict: Pragma 'a_VDC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'a_VDC' in module 'bjt504t'.
  #undef a_VDC
#endif
#ifdef expl
  #warning conflict: expl is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'expl' is also defined as a pragma.
  #warning conflict: Pragma 'expl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'expl' in module 'bjt504t'.
  #undef expl
#endif
#ifdef tmpExp
  #warning conflict: tmpExp is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'tmpExp' is also defined as a pragma.
  #warning conflict: Pragma 'tmpExp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tmpExp' in module 'bjt504t'.
  #undef tmpExp
#endif
#ifdef tmpV
  #warning conflict: tmpV is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'tmpV' is also defined as a pragma.
  #warning conflict: Pragma 'tmpV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tmpV' in module 'bjt504t'.
  #undef tmpV
#endif
#ifdef a_VDS
  #warning conflict: a_VDS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'a_VDS' is also defined as a pragma.
  #warning conflict: Pragma 'a_VDS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'a_VDS' in module 'bjt504t'.
  #undef a_VDS
#endif
#ifdef common
  #warning conflict: common is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'common' is also defined as a pragma.
  #warning conflict: Pragma 'common' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'common' in module 'bjt504t'.
  #undef common
#endif
#ifdef powerREC
  #warning conflict: powerREC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerREC' is also defined as a pragma.
  #warning conflict: Pragma 'powerREC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerREC' in module 'bjt504t'.
  #undef powerREC
#endif
#ifdef powerRBC
  #warning conflict: powerRBC is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerRBC' is also defined as a pragma.
  #warning conflict: Pragma 'powerRBC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerRBC' in module 'bjt504t'.
  #undef powerRBC
#endif
#ifdef powerRCCxx
  #warning conflict: powerRCCxx is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerRCCxx' is also defined as a pragma.
  #warning conflict: Pragma 'powerRCCxx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerRCCxx' in module 'bjt504t'.
  #undef powerRCCxx
#endif
#ifdef powerRCCex
  #warning conflict: powerRCCex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerRCCex' is also defined as a pragma.
  #warning conflict: Pragma 'powerRCCex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerRCCex' in module 'bjt504t'.
  #undef powerRCCex
#endif
#ifdef powerRCCin
  #warning conflict: powerRCCin is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerRCCin' is also defined as a pragma.
  #warning conflict: Pragma 'powerRCCin' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerRCCin' in module 'bjt504t'.
  #undef powerRCCin
#endif
#ifdef powerRBV
  #warning conflict: powerRBV is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerRBV' is also defined as a pragma.
  #warning conflict: Pragma 'powerRBV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerRBV' in module 'bjt504t'.
  #undef powerRBV
#endif
#ifdef powerCCS
  #warning conflict: powerCCS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerCCS' is also defined as a pragma.
  #warning conflict: Pragma 'powerCCS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerCCS' in module 'bjt504t'.
  #undef powerCCS
#endif
#ifdef powerFBCS
  #warning conflict: powerFBCS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerFBCS' is also defined as a pragma.
  #warning conflict: Pragma 'powerFBCS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerFBCS' in module 'bjt504t'.
  #undef powerFBCS
#endif
#ifdef powerFBC1fB1
  #warning conflict: powerFBC1fB1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerFBC1fB1' is also defined as a pragma.
  #warning conflict: Pragma 'powerFBC1fB1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerFBC1fB1' in module 'bjt504t'.
  #undef powerFBC1fB1
#endif
#ifdef exponentFBC1fB2
  #warning conflict: exponentFBC1fB2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'exponentFBC1fB2' is also defined as a pragma.
  #warning conflict: Pragma 'exponentFBC1fB2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'exponentFBC1fB2' in module 'bjt504t'.
  #undef exponentFBC1fB2
#endif
#ifdef powerFBC1fB2
  #warning conflict: powerFBC1fB2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerFBC1fB2' is also defined as a pragma.
  #warning conflict: Pragma 'powerFBC1fB2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerFBC1fB2' in module 'bjt504t'.
  #undef powerFBC1fB2
#endif
#ifdef powerEBSCS
  #warning conflict: powerEBSCS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerEBSCS' is also defined as a pragma.
  #warning conflict: Pragma 'powerEBSCS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerEBSCS' in module 'bjt504t'.
  #undef powerEBSCS
#endif
#ifdef powerEBSC1f
  #warning conflict: powerEBSC1f is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerEBSC1f' is also defined as a pragma.
  #warning conflict: Pragma 'powerEBSC1f' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerEBSC1f' in module 'bjt504t'.
  #undef powerEBSC1f
#endif
#ifdef powerRBCS
  #warning conflict: powerRBCS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerRBCS' is also defined as a pragma.
  #warning conflict: Pragma 'powerRBCS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerRBCS' in module 'bjt504t'.
  #undef powerRBCS
#endif
#ifdef powerRBC1f
  #warning conflict: powerRBC1f is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerRBC1f' is also defined as a pragma.
  #warning conflict: Pragma 'powerRBC1f' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerRBC1f' in module 'bjt504t'.
  #undef powerRBC1f
#endif
#ifdef powerExCS
  #warning conflict: powerExCS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerExCS' is also defined as a pragma.
  #warning conflict: Pragma 'powerExCS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerExCS' in module 'bjt504t'.
  #undef powerExCS
#endif
#ifdef powerExCSMOD
  #warning conflict: powerExCSMOD is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerExCSMOD' is also defined as a pragma.
  #warning conflict: Pragma 'powerExCSMOD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerExCSMOD' in module 'bjt504t'.
  #undef powerExCSMOD
#endif
#ifdef powerExC1f
  #warning conflict: powerExC1f is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerExC1f' is also defined as a pragma.
  #warning conflict: Pragma 'powerExC1f' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerExC1f' in module 'bjt504t'.
  #undef powerExC1f
#endif
#ifdef powerExC1fMOD
  #warning conflict: powerExC1fMOD is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerExC1fMOD' is also defined as a pragma.
  #warning conflict: Pragma 'powerExC1fMOD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerExC1fMOD' in module 'bjt504t'.
  #undef powerExC1fMOD
#endif
#ifdef powerSubsCS_B1S
  #warning conflict: powerSubsCS_B1S is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerSubsCS_B1S' is also defined as a pragma.
  #warning conflict: Pragma 'powerSubsCS_B1S' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerSubsCS_B1S' in module 'bjt504t'.
  #undef powerSubsCS_B1S
#endif
#ifdef powerSubsCS_BS
  #warning conflict: powerSubsCS_BS is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerSubsCS_BS' is also defined as a pragma.
  #warning conflict: Pragma 'powerSubsCS_BS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerSubsCS_BS' in module 'bjt504t'.
  #undef powerSubsCS_BS
#endif
#ifdef twoqIavl
  #warning conflict: twoqIavl is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'twoqIavl' is also defined as a pragma.
  #warning conflict: Pragma 'twoqIavl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'twoqIavl' in module 'bjt504t'.
  #undef twoqIavl
#endif
#ifdef cor_exp_1
  #warning conflict: cor_exp_1 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'cor_exp_1' is also defined as a pragma.
  #warning conflict: Pragma 'cor_exp_1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cor_exp_1' in module 'bjt504t'.
  #undef cor_exp_1
#endif
#ifdef cor_exp_2
  #warning conflict: cor_exp_2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'cor_exp_2' is also defined as a pragma.
  #warning conflict: Pragma 'cor_exp_2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cor_exp_2' in module 'bjt504t'.
  #undef cor_exp_2
#endif
#ifdef powerCCS_A
  #warning conflict: powerCCS_A is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'powerCCS_A' is also defined as a pragma.
  #warning conflict: Pragma 'powerCCS_A' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'powerCCS_A' in module 'bjt504t'.
  #undef powerCCS_A
#endif
#ifdef dydx
  #warning conflict: dydx is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'dydx' is also defined as a pragma.
  #warning conflict: Pragma 'dydx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dydx' in module 'bjt504t'.
  #undef dydx
#endif
#ifdef dydz
  #warning conflict: dydz is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'dydz' is also defined as a pragma.
  #warning conflict: Pragma 'dydz' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dydz' in module 'bjt504t'.
  #undef dydz
#endif
#ifdef gpi
  #warning conflict: gpi is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'gpi' is also defined as a pragma.
  #warning conflict: Pragma 'gpi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gpi' in module 'bjt504t'.
  #undef gpi
#endif
#ifdef gammax
  #warning conflict: gammax is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'gammax' is also defined as a pragma.
  #warning conflict: Pragma 'gammax' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gammax' in module 'bjt504t'.
  #undef gammax
#endif
#ifdef gammay
  #warning conflict: gammay is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'gammay' is also defined as a pragma.
  #warning conflict: Pragma 'gammay' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gammay' in module 'bjt504t'.
  #undef gammay
#endif
#ifdef gammaz
  #warning conflict: gammaz is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'gammaz' is also defined as a pragma.
  #warning conflict: Pragma 'gammaz' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gammaz' in module 'bjt504t'.
  #undef gammaz
#endif
#ifdef gbfx
  #warning conflict: gbfx is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'gbfx' is also defined as a pragma.
  #warning conflict: Pragma 'gbfx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gbfx' in module 'bjt504t'.
  #undef gbfx
#endif
#ifdef gbfy
  #warning conflict: gbfy is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'gbfy' is also defined as a pragma.
  #warning conflict: Pragma 'gbfy' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gbfy' in module 'bjt504t'.
  #undef gbfy
#endif
#ifdef gbfz
  #warning conflict: gbfz is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'gbfz' is also defined as a pragma.
  #warning conflict: Pragma 'gbfz' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gbfz' in module 'bjt504t'.
  #undef gbfz
#endif
#ifdef alpha_ft
  #warning conflict: alpha_ft is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'alpha_ft' is also defined as a pragma.
  #warning conflict: Pragma 'alpha_ft' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alpha_ft' in module 'bjt504t'.
  #undef alpha_ft
#endif
#ifdef rx
  #warning conflict: rx is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'rx' is also defined as a pragma.
  #warning conflict: Pragma 'rx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rx' in module 'bjt504t'.
  #undef rx
#endif
#ifdef ry
  #warning conflict: ry is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'ry' is also defined as a pragma.
  #warning conflict: Pragma 'ry' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ry' in module 'bjt504t'.
  #undef ry
#endif
#ifdef rz
  #warning conflict: rz is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'rz' is also defined as a pragma.
  #warning conflict: Pragma 'rz' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rz' in module 'bjt504t'.
  #undef rz
#endif
#ifdef rb1b2
  #warning conflict: rb1b2 is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'rb1b2' is also defined as a pragma.
  #warning conflict: Pragma 'rb1b2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rb1b2' in module 'bjt504t'.
  #undef rb1b2
#endif
#ifdef rex
  #warning conflict: rex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'rex' is also defined as a pragma.
  #warning conflict: Pragma 'rex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rex' in module 'bjt504t'.
  #undef rex
#endif
#ifdef xrex
  #warning conflict: xrex is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'xrex' is also defined as a pragma.
  #warning conflict: Pragma 'xrex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xrex' in module 'bjt504t'.
  #undef xrex
#endif
#ifdef taut
  #warning conflict: taut is declared as a variable of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'taut' is also defined as a pragma.
  #warning conflict: Pragma 'taut' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'taut' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: GND is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'GND' is also defined as a pragma.
  #warning conflict: Pragma 'GND' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GND' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: c is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'c' is also defined as a pragma.
  #warning conflict: Pragma 'c' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'c' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: b is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'b' is also defined as a pragma.
  #warning conflict: Pragma 'b' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'b' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: e is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'e' is also defined as a pragma.
  #warning conflict: Pragma 'e' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'e' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: s is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 's' is also defined as a pragma.
  #warning conflict: Pragma 's' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 's' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: dt is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'dt' is also defined as a pragma.
  #warning conflict: Pragma 'dt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dt' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: c1 is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'c1' is also defined as a pragma.
  #warning conflict: Pragma 'c1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'c1' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: e1 is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'e1' is also defined as a pragma.
  #warning conflict: Pragma 'e1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'e1' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: b1 is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'b1' is also defined as a pragma.
  #warning conflict: Pragma 'b1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'b1' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: b2 is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'b2' is also defined as a pragma.
  #warning conflict: Pragma 'b2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'b2' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: c2 is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'c2' is also defined as a pragma.
  #warning conflict: Pragma 'c2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'c2' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: c3 is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'c3' is also defined as a pragma.
  #warning conflict: Pragma 'c3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'c3' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: c4 is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'c4' is also defined as a pragma.
  #warning conflict: Pragma 'c4' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'c4' in module 'bjt504t'.
  #undef taut
#endif
#ifdef taut
  #warning conflict: noi is declared as a node of module 'bjt504t'.
  #warning conflict: However in the API of ngspice 'noi' is also defined as a pragma.
  #warning conflict: Pragma 'noi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'noi' in module 'bjt504t'.
  #undef taut
#endif

#ifdef NGSPICE_DEBUG_OK
#define NGSPICE_DEBUG \
{ \
  if(getenv("ngspice_debug")) \
    bjt504tdebug(ckt,model,here); \
  else \
  { \
    printf("  To get more info run your simulation after setting shell variable ngspice_debug to 1\n"); \
    printf("  For example in sh shell just type: export ngspice_debug=1\n"); \
  } \
}
#else
#define NGSPICE_DEBUG
#endif

#define EXIT_IF_ISNAN(var) \
if(isnan((double) var)) \
{ \
  printf("%s:%i:bug:isnan:"#var"\n",__FILE__,__LINE__); \
  printf("Please send this message to laurent.lemaitre@freescale.com\n"); \
  NGSPICE_DEBUG \
  exit(1); /*__asm__ __volatile__ ("int $03");*/ \
} \
if(isinf((double) var)) \
{ \
  printf("%s:%i:bug:isinf:"#var"\n",__FILE__,__LINE__); \
  printf("Please send this message to laurent.lemaitre@freescale.com\n"); \
  NGSPICE_DEBUG \
  exit(1); /*__asm__ __volatile__ ("int $03");*/ \
}

/* ngspice $simparam variables
    gdev                (1/Ohms): Additional conductance to be added to nonlinear branches for conductance homotopy convergence algorithm.
    gmin                (1/Ohms): Minimum conductance placed in parallel with nonlinear branches.
    imax                (Amps)  : Branch current threshold above which the constitutive relation of a nonlinear branch should be linearized.
    imelt               (Amps)  : Branch current threshold indicating device failure.
    iteration                   : Iteration number of the analog solver.
    scale                       : Scale factor for device instance geometry parameters.
    shrink                      : Optical linear shrink factor.
    simulatorSubversion         : The simulator sub-version.
    simulatorVersion            : The simulator version.
    sourceScaleFactor           : Multiplicative factor for independent sources for source stepping homotopy convergence algorithm.
    tnom degrees       (Celsius): Default value of temperature at which model parameters were extracted.
*/

#define _circuit_gdev                ckt->CKTgmin
#define _circuit_gmin                ((ckt->CKTgmin)>(ckt->CKTdiagGmin))?(ckt->CKTgmin):(ckt->CKTdiagGmin)
#define _circuit_imax                1.0
#define _circuit_imelt               1.0
#define _circuit_iteration           1.0
#define _circuit_scale               1.0
#define _circuit_shrink              1.0
#define _circuit_simulatorSubversion 0
#define _circuit_simulatorVersion    3.5
#define _circuit_sourceScaleFactor   1.0
#define _circuit_tnom                ckt->CKTnomTemp

#define _circuit_temp      ckt->CKTtemp
#define _scale             1.0

#define _cos(val,arg)            val = cos(arg);
#define _d_cos(val,dval,arg)     val = cos(arg);     dval = (-sin(arg));
#define _sin(val,arg)            val = sin(arg);
#define _d_sin(val,dval,arg)     val = sin(arg);     dval = (cos(arg));
#define _tan(val,arg)            val = tan(arg);
#define _d_tan(val,dval,arg)     val = tan(arg);     dval = (1.0/cos(arg)/cos(arg));
#define _hypot(xy,x,y)           xy = sqrt((x)*(x)+(y)*(y));
#define _dx_hypot(dx,xy,x,y)     dx = (x)/(xy);
#define _dy_hypot(dy,xy,x,y)     dy = (y)/(xy);
#define _max(xy,x,y)             xy = ((x)>(y))?(x):(y);
#define _dx_max(dx,xy,x,y)       dx = ((x)>(y))?1.0:0.0;
#define _dy_max(dy,xy,x,y)       dy = ((x)>(y))?0.0:1.0;
#define _min(xy,x,y)             xy = ((x)<(y))?(x):(y);
#define _dx_min(dx,xy,x,y)       dx = ((x)<(y))?1.0:0.0;
#define _dy_min(dy,xy,x,y)       dy = ((x)<(y))?0.0:1.0;
#define _cosh(val,arg)           val = cosh(arg);
#define _d_cosh(val,dval,arg)    val = cosh(arg);    dval = (sinh(arg));
#define _sinh(val,arg)           val = sinh(arg);
#define _d_sinh(val,dval,arg)    val = sinh(arg);    dval = (cosh(arg));
#define _tanh(val,arg)           val = tanh(arg);
#define _d_tanh(val,dval,arg)    val = tanh(arg);    dval = (1.0/cosh(arg)/cosh(arg));
#define _acos(val,arg)           val = acos(arg);
#define _d_acos(val,dval,arg)    val = acos(arg);    dval = (-1.0/sqrt(1-arg*arg));
#define _asin(val,arg)           val = asin(arg);
#define _d_asin(val,dval,arg)    val = asin(arg);    dval = (+1.0/sqrt(1-arg*arg));
#define _atan(val,arg)           val = atan(arg);
#define _d_atan(val,dval,arg)    val = atan(arg);    dval = (+1.0/(1+arg*arg));
#define _logE(val,arg)           val = log(arg);
#define _d_logE(val,dval,arg)    val = log(arg);     dval = (1.0/arg);
#define _log10(val,arg)          val = log10(arg);
#define _d_log10(val,dval,arg)   val = log10(arg);   dval = (1.0/arg/log(10));
#define _exp(val,arg)            val = exp(arg);
#define _d_exp(val,dval,arg)     val = exp(arg);     dval = val;
#define _sqrt(val,arg)           val = sqrt(arg);
#define _d_sqrt(val,dval,arg)    val = sqrt(arg);    dval = (1.0/val/2.0);
#define _pow(xy,x,y)             xy = pow(x,y);
#define _dx_pow(dx,xy,x,y)       dx = (x==0.0)?0.0:((y/x)*xy);
#define _dy_pow(dy,xy,x,y)       dy = (x==0.0)?0.0:((log(x)/exp(0.0))*xy);

#define _div1(x,y)               ((x)/(y))
#define _div0(xy,x,y)            xy=(x)/(y);
#define _div(xy,dx,x,y)          dx=1/(y); xy=(x)*dx;
#define _dx_div(dx,xy,x,y)
#define _dy_div(dy,dx,xy,x,y)    dy = -xy*dx;

#define _limexp(val,arg)         val = ((arg)<(90)) ? (exp(arg)) : (exp(90)*(1.0+(arg-90)));
#define _d_limexp(val,dval,arg)  val = ((arg)<(90)) ? (exp(arg)) : (exp(90)*(1.0+(arg-90))); dval = val;
#define _fabs(val,arg)           val = fabs(arg);
#define _d_fabs(val,dval,arg)    val = fabs(arg);    dval = (((val)>=0)?(+1.0):(-1.0));
#define _abs(val)                ((val)<(0) ? (-(val)):(val))

/* declarations for bjt504t MOSFETs */

/* information needed for each instance */
typedef struct sbjt504tinstance {
  struct sbjt504tmodel *bjt504tmodPtr;           /* pointer to model */
  struct sbjt504tinstance *bjt504tnextInstance;  /* pointer to next instance of current model*/
  IFuid bjt504tname; /* pointer to character string naming this instance */
  int bjt504tstate; /* index into state table for this device */

  /* node */  int cNode;  /*c*/
  int bNode;  /*b*/
  int eNode;  /*e*/
  int sNode;  /*s*/
  int dtNode;  /*dt*/
  int c1Node;  /*c1*/
  int e1Node;  /*e1*/
  int b1Node;  /*b1*/
  int b2Node;  /*b2*/
  int c2Node;  /*c2*/
  int c3Node;  /*c3*/
  int c4Node;  /*c4*/
  int noiNode;  /*noi*/

  /* instance parameters */
 // noise
  double fpnoise0, fenoise0;
  double fpnoise1, fenoise1;
  double fpnoise2, fenoise2;
  double fpnoise3, fenoise3;
  double fpnoise4, fenoise4;
  double fpnoise5, fenoise5;
  double wnoise0;
  double wnoise1;
  double wnoise2;
  double wnoise3;
  double wnoise4;
  double wnoise5;
  double wnoise6;
  double wnoise7;
  double wnoise8;
  double wnoise9;
  double wnoise10;
  double wnoise11;
  double wnoise12;
  double wnoise13;
  double wnoise14;
  double wnoise15;
  double wnoise16;
  double wnoise17;
  double wnoise18;
  double wnoise19;


  /* variables */  double Tk;
  double Izteb;
  double RE_TM;
  double RBC_TM;
  double GCCxx_TM;
  double GCCex_TM;
  double GCCin_TM;
  double KF_M;
  double KFN_M;
  double qBI;
  double Ir;
  double If;
  double Ib1;
  double Ib1_s;
  double Ib2;
  double Ib3;
  double Iex;
  double XIex;
  double Isub;
  double XIsub;
  double Rb2;
  double Gem;
  double eVb1b2;

  /* states */  int state_b_c1;
  int state_b_c4;
  int state_b1_c1;
  int state_b1_c4;
  int state_b_c3;
  int state_b_c;
  int state_b_e;
  int state_dt_GND;
  int state_b2_c2;
  int state_b1_b2;
  int state_s_c1;
  int state_b2_e1;
  int state_b1_e1;

  /* pointer to sparse matrix (+ values)*/  double *PTR_J_c1_c1;
    int PTR_J_c1_c1_required;
    double JSVAL_c1_c1;
    double JDVAL_c1_c1;
  double *PTR_J_c1_c2;
    int PTR_J_c1_c2_required;
    double JSVAL_c1_c2;
    double JDVAL_c1_c2;
  double *PTR_J_c2_c1;
    int PTR_J_c2_c1_required;
    double JSVAL_c2_c1;
    double JDVAL_c2_c1;
  double *PTR_J_c2_c2;
    int PTR_J_c2_c2_required;
    double JSVAL_c2_c2;
    double JDVAL_c2_c2;
  double *PTR_J_c1_b2;
    int PTR_J_c1_b2_required;
    double JSVAL_c1_b2;
    double JDVAL_c1_b2;
  double *PTR_J_c2_b2;
    int PTR_J_c2_b2_required;
    double JSVAL_c2_b2;
    double JDVAL_c2_b2;
  double *PTR_J_c1_dt;
    int PTR_J_c1_dt_required;
    double JSVAL_c1_dt;
    double JDVAL_c1_dt;
  double *PTR_J_c2_dt;
    int PTR_J_c2_dt_required;
    double JSVAL_c2_dt;
    double JDVAL_c2_dt;
  double *PTR_J_e1_c1;
    int PTR_J_e1_c1_required;
    double JSVAL_e1_c1;
    double JDVAL_e1_c1;
  double *PTR_J_e1_c2;
    int PTR_J_e1_c2_required;
    double JSVAL_e1_c2;
    double JDVAL_e1_c2;
  double *PTR_J_e1_b2;
    int PTR_J_e1_b2_required;
    double JSVAL_e1_b2;
    double JDVAL_e1_b2;
  double *PTR_J_c2_e1;
    int PTR_J_c2_e1_required;
    double JSVAL_c2_e1;
    double JDVAL_c2_e1;
  double *PTR_J_e1_e1;
    int PTR_J_e1_e1_required;
    double JSVAL_e1_e1;
    double JDVAL_e1_e1;
  double *PTR_J_e1_dt;
    int PTR_J_e1_dt_required;
    double JSVAL_e1_dt;
    double JDVAL_e1_dt;
  double *PTR_J_b1_b1;
    int PTR_J_b1_b1_required;
    double JSVAL_b1_b1;
    double JDVAL_b1_b1;
  double *PTR_J_b1_e1;
    int PTR_J_b1_e1_required;
    double JSVAL_b1_e1;
    double JDVAL_b1_e1;
  double *PTR_J_e1_b1;
    int PTR_J_e1_b1_required;
    double JSVAL_e1_b1;
    double JDVAL_e1_b1;
  double *PTR_J_b1_dt;
    int PTR_J_b1_dt_required;
    double JSVAL_b1_dt;
    double JDVAL_b1_dt;
  double *PTR_J_b2_b2;
    int PTR_J_b2_b2_required;
    double JSVAL_b2_b2;
    double JDVAL_b2_b2;
  double *PTR_J_b2_e1;
    int PTR_J_b2_e1_required;
    double JSVAL_b2_e1;
    double JDVAL_b2_e1;
  double *PTR_J_b2_dt;
    int PTR_J_b2_dt_required;
    double JSVAL_b2_dt;
    double JDVAL_b2_dt;
  double *PTR_J_b2_c1;
    int PTR_J_b2_c1_required;
    double JSVAL_b2_c1;
    double JDVAL_b2_c1;
  double *PTR_J_b2_c2;
    int PTR_J_b2_c2_required;
    double JSVAL_b2_c2;
    double JDVAL_b2_c2;
  double *PTR_J_b1_c4;
    int PTR_J_b1_c4_required;
    double JSVAL_b1_c4;
    double JDVAL_b1_c4;
  double *PTR_J_b1_c1;
    int PTR_J_b1_c1_required;
    double JSVAL_b1_c1;
    double JDVAL_b1_c1;
  double *PTR_J_s_c4;
    int PTR_J_s_c4_required;
    double JSVAL_s_c4;
    double JDVAL_s_c4;
  double *PTR_J_s_c1;
    int PTR_J_s_c1_required;
    double JSVAL_s_c1;
    double JDVAL_s_c1;
  double *PTR_J_b1_c2;
    int PTR_J_b1_c2_required;
    double JSVAL_b1_c2;
    double JDVAL_b1_c2;
  double *PTR_J_s_c2;
    int PTR_J_s_c2_required;
    double JSVAL_s_c2;
    double JDVAL_s_c2;
  double *PTR_J_b1_b2;
    int PTR_J_b1_b2_required;
    double JSVAL_b1_b2;
    double JDVAL_b1_b2;
  double *PTR_J_s_b2;
    int PTR_J_s_b2_required;
    double JSVAL_s_b2;
    double JDVAL_s_b2;
  double *PTR_J_s_b1;
    int PTR_J_s_b1_required;
    double JSVAL_s_b1;
    double JDVAL_s_b1;
  double *PTR_J_s_dt;
    int PTR_J_s_dt_required;
    double JSVAL_s_dt;
    double JDVAL_s_dt;
  double *PTR_J_b_c1;
    int PTR_J_b_c1_required;
    double JSVAL_b_c1;
    double JDVAL_b_c1;
  double *PTR_J_b_c2;
    int PTR_J_b_c2_required;
    double JSVAL_b_c2;
    double JDVAL_b_c2;
  double *PTR_J_b_b2;
    int PTR_J_b_b2_required;
    double JSVAL_b_b2;
    double JDVAL_b_b2;
  double *PTR_J_b_e1;
    int PTR_J_b_e1_required;
    double JSVAL_b_e1;
    double JDVAL_b_e1;
  double *PTR_J_s_e1;
    int PTR_J_s_e1_required;
    double JSVAL_s_e1;
    double JDVAL_s_e1;
  double *PTR_J_b_c3;
    int PTR_J_b_c3_required;
    double JSVAL_b_c3;
    double JDVAL_b_c3;
  double *PTR_J_b_c4;
    int PTR_J_b_c4_required;
    double JSVAL_b_c4;
    double JDVAL_b_c4;
  double *PTR_J_s_c3;
    int PTR_J_s_c3_required;
    double JSVAL_s_c3;
    double JDVAL_s_c3;
  double *PTR_J_b_b1;
    int PTR_J_b_b1_required;
    double JSVAL_b_b1;
    double JDVAL_b_b1;
  double *PTR_J_b_b;
    int PTR_J_b_b_required;
    double JSVAL_b_b;
    double JDVAL_b_b;
  double *PTR_J_s_b;
    int PTR_J_s_b_required;
    double JSVAL_s_b;
    double JDVAL_s_b;
  double *PTR_J_b_c;
    int PTR_J_b_c_required;
    double JSVAL_b_c;
    double JDVAL_b_c;
  double *PTR_J_s_c;
    int PTR_J_s_c_required;
    double JSVAL_s_c;
    double JDVAL_s_c;
  double *PTR_J_b_dt;
    int PTR_J_b_dt_required;
    double JSVAL_b_dt;
    double JDVAL_b_dt;
  double *PTR_J_s_s;
    int PTR_J_s_s_required;
    double JSVAL_s_s;
    double JDVAL_s_s;
  double *PTR_J_c1_s;
    int PTR_J_c1_s_required;
    double JSVAL_c1_s;
    double JDVAL_c1_s;
  double *PTR_J_b1_c3;
    int PTR_J_b1_c3_required;
    double JSVAL_b1_c3;
    double JDVAL_b1_c3;
  double *PTR_J_b2_c3;
    int PTR_J_b2_c3_required;
    double JSVAL_b2_c3;
    double JDVAL_b2_c3;
  double *PTR_J_b2_c4;
    int PTR_J_b2_c4_required;
    double JSVAL_b2_c4;
    double JDVAL_b2_c4;
  double *PTR_J_b1_b;
    int PTR_J_b1_b_required;
    double JSVAL_b1_b;
    double JDVAL_b1_b;
  double *PTR_J_b2_b;
    int PTR_J_b2_b_required;
    double JSVAL_b2_b;
    double JDVAL_b2_b;
  double *PTR_J_b2_b1;
    int PTR_J_b2_b1_required;
    double JSVAL_b2_b1;
    double JDVAL_b2_b1;
  double *PTR_J_b1_c;
    int PTR_J_b1_c_required;
    double JSVAL_b1_c;
    double JDVAL_b1_c;
  double *PTR_J_b2_c;
    int PTR_J_b2_c_required;
    double JSVAL_b2_c;
    double JDVAL_b2_c;
  double *PTR_J_c2_c3;
    int PTR_J_c2_c3_required;
    double JSVAL_c2_c3;
    double JDVAL_c2_c3;
  double *PTR_J_c2_c4;
    int PTR_J_c2_c4_required;
    double JSVAL_c2_c4;
    double JDVAL_c2_c4;
  double *PTR_J_c2_b1;
    int PTR_J_c2_b1_required;
    double JSVAL_c2_b1;
    double JDVAL_c2_b1;
  double *PTR_J_c2_b;
    int PTR_J_c2_b_required;
    double JSVAL_c2_b;
    double JDVAL_c2_b;
  double *PTR_J_c2_c;
    int PTR_J_c2_c_required;
    double JSVAL_c2_c;
    double JDVAL_c2_c;
  double *PTR_J_e_dt;
    int PTR_J_e_dt_required;
    double JSVAL_e_dt;
  double *PTR_J_e_e;
    int PTR_J_e_e_required;
    double JSVAL_e_e;
    double JDVAL_e_e;
  double *PTR_J_e_e1;
    int PTR_J_e_e1_required;
    double JSVAL_e_e1;
  double *PTR_J_e1_e;
    int PTR_J_e1_e_required;
    double JSVAL_e1_e;
  double *PTR_J_dt_dt;
    int PTR_J_dt_dt_required;
    double JSVAL_dt_dt;
    double JDVAL_dt_dt;
  double *PTR_J_dt_s;
    int PTR_J_dt_s_required;
    double JSVAL_dt_s;
  double *PTR_J_dt_c1;
    int PTR_J_dt_c1_required;
    double JSVAL_dt_c1;
  double *PTR_J_dt_b1;
    int PTR_J_dt_b1_required;
    double JSVAL_dt_b1;
  double *PTR_J_dt_e1;
    int PTR_J_dt_e1_required;
    double JSVAL_dt_e1;
  double *PTR_J_dt_e;
    int PTR_J_dt_e_required;
    double JSVAL_dt_e;
  double *PTR_J_dt_c3;
    int PTR_J_dt_c3_required;
    double JSVAL_dt_c3;
  double *PTR_J_dt_c4;
    int PTR_J_dt_c4_required;
    double JSVAL_dt_c4;
  double *PTR_J_dt_b2;
    int PTR_J_dt_b2_required;
    double JSVAL_dt_b2;
  double *PTR_J_dt_b;
    int PTR_J_dt_b_required;
    double JSVAL_dt_b;
  double *PTR_J_dt_c;
    int PTR_J_dt_c_required;
    double JSVAL_dt_c;
  double *PTR_J_dt_c2;
    int PTR_J_dt_c2_required;
    double JSVAL_dt_c2;
  double *PTR_J_noi_noi;
    int PTR_J_noi_noi_required;
    double JSVAL_noi_noi;
  double *PTR_J_noi_e1;
    int PTR_J_noi_e1_required;
    double JSVAL_noi_e1;
  double *PTR_J_e1_noi;
    int PTR_J_e1_noi_required;
    double JSVAL_e1_noi;
  double *PTR_J_b2_noi;
    int PTR_J_b2_noi_required;
    double JSVAL_b2_noi;
  double *PTR_J_c2_noi;
    int PTR_J_c2_noi_required;
    double JSVAL_c2_noi;
  double *PTR_J_e1_c3;
    int PTR_J_e1_c3_required;
    double JDVAL_e1_c3;
  double *PTR_J_e1_c4;
    int PTR_J_e1_c4_required;
    double JDVAL_e1_c4;
  double *PTR_J_e1_b;
    int PTR_J_e1_b_required;
    double JDVAL_e1_b;
  double *PTR_J_e1_c;
    int PTR_J_e1_c_required;
    double JDVAL_e1_c;
  double *PTR_J_c1_e1;
    int PTR_J_c1_e1_required;
    double JSVAL_c1_e1;
    double JDVAL_c1_e1;
  double *PTR_J_c1_b1;
    int PTR_J_c1_b1_required;
    double JSVAL_c1_b1;
    double JDVAL_c1_b1;
  double *PTR_J_c1_c4;
    int PTR_J_c1_c4_required;
    double JSVAL_c1_c4;
    double JDVAL_c1_c4;
  double *PTR_J_c1_c3;
    int PTR_J_c1_c3_required;
    double JSVAL_c1_c3;
    double JDVAL_c1_c3;
  double *PTR_J_c1_b;
    int PTR_J_c1_b_required;
    double JSVAL_c1_b;
    double JDVAL_c1_b;
  double *PTR_J_c1_c;
    int PTR_J_c1_c_required;
    double JSVAL_c1_c;
    double JDVAL_c1_c;
  double *PTR_J_b_e;
    int PTR_J_b_e_required;
    double JDVAL_b_e;
  double *PTR_J_e_b;
    int PTR_J_e_b_required;
    double JDVAL_e_b;
  double *PTR_J_c_b;
    int PTR_J_c_b_required;
    double JSVAL_c_b;
    double JDVAL_c_b;
  double *PTR_J_c_c;
    int PTR_J_c_c_required;
    double JSVAL_c_c;
    double JDVAL_c_c;
  double *PTR_J_c3_c1;
    int PTR_J_c3_c1_required;
    double JSVAL_c3_c1;
    double JDVAL_c3_c1;
  double *PTR_J_c3_c2;
    int PTR_J_c3_c2_required;
    double JSVAL_c3_c2;
    double JDVAL_c3_c2;
  double *PTR_J_c3_b2;
    int PTR_J_c3_b2_required;
    double JSVAL_c3_b2;
    double JDVAL_c3_b2;
  double *PTR_J_c3_e1;
    int PTR_J_c3_e1_required;
    double JSVAL_c3_e1;
    double JDVAL_c3_e1;
  double *PTR_J_c3_c3;
    int PTR_J_c3_c3_required;
    double JSVAL_c3_c3;
    double JDVAL_c3_c3;
  double *PTR_J_c3_c4;
    int PTR_J_c3_c4_required;
    double JSVAL_c3_c4;
    double JDVAL_c3_c4;
  double *PTR_J_c3_b1;
    int PTR_J_c3_b1_required;
    double JSVAL_c3_b1;
    double JDVAL_c3_b1;
  double *PTR_J_c3_b;
    int PTR_J_c3_b_required;
    double JSVAL_c3_b;
    double JDVAL_c3_b;
  double *PTR_J_c3_c;
    int PTR_J_c3_c_required;
    double JSVAL_c3_c;
    double JDVAL_c3_c;
  double *PTR_J_c3_dt;
    int PTR_J_c3_dt_required;
    double JSVAL_c3_dt;
    double JDVAL_c3_dt;
  double *PTR_J_c_dt;
    int PTR_J_c_dt_required;
    double JSVAL_c_dt;
  double *PTR_J_c_c3;
    int PTR_J_c_c3_required;
    double JSVAL_c_c3;
  double *PTR_J_c_c4;
    int PTR_J_c_c4_required;
    double JSVAL_c_c4;
  double *PTR_J_c_c1;
    int PTR_J_c_c1_required;
    double JSVAL_c_c1;
  double *PTR_J_c_c2;
    int PTR_J_c_c2_required;
    double JSVAL_c_c2;
  double *PTR_J_c_b2;
    int PTR_J_c_b2_required;
    double JSVAL_c_b2;
  double *PTR_J_c_b1;
    int PTR_J_c_b1_required;
    double JSVAL_c_b1;
  double *PTR_J_c4_dt;
    int PTR_J_c4_dt_required;
    double JSVAL_c4_dt;
    double JDVAL_c4_dt;
  double *PTR_J_c4_c4;
    int PTR_J_c4_c4_required;
    double JSVAL_c4_c4;
    double JDVAL_c4_c4;
  double *PTR_J_c4_c1;
    int PTR_J_c4_c1_required;
    double JSVAL_c4_c1;
    double JDVAL_c4_c1;
  double *PTR_J_c4_b2;
    int PTR_J_c4_b2_required;
    double JSVAL_c4_b2;
    double JDVAL_c4_b2;
  double *PTR_J_c4_e1;
    int PTR_J_c4_e1_required;
    double JSVAL_c4_e1;
    double JDVAL_c4_e1;
  double *PTR_J_c4_c2;
    int PTR_J_c4_c2_required;
    double JSVAL_c4_c2;
    double JDVAL_c4_c2;
  double *PTR_J_c4_b1;
    int PTR_J_c4_b1_required;
    double JSVAL_c4_b1;
    double JDVAL_c4_b1;
  double *PTR_J_c4_c3;
    int PTR_J_c4_c3_required;
    double JSVAL_c4_c3;
    double JDVAL_c4_c3;
  double *PTR_J_c4_b;
    int PTR_J_c4_b_required;
    double JSVAL_c4_b;
    double JDVAL_c4_b;
  double *PTR_J_c4_c;
    int PTR_J_c4_c_required;
    double JSVAL_c4_c;
    double JDVAL_c4_c;
  double *PTR_J_noi_b2;
    int PTR_J_noi_b2_required;
    double JSVAL_noi_b2;
  double *PTR_J_noi_c1;
    int PTR_J_noi_c1_required;
    double JSVAL_noi_c1;
  double *PTR_J_noi_c2;
    int PTR_J_noi_c2_required;
    double JSVAL_noi_c2;
  double *PTR_J_noi_dt;
    int PTR_J_noi_dt_required;
    double JSVAL_noi_dt;


#define bjt504tnumStates 0

} bjt504tinstance ;


/* per model data */

typedef struct sbjt504tmodel {         /* model structure */
  int bjt504tmodType;        /* type index of this device type */
  struct sbjt504tmodel *bjt504tnextModel; /* pointer to next possible model in linked list */
  bjt504tinstance * bjt504tinstances;  /* pointer to list of instances that have this model */
  IFuid bjt504tmodName;         /* pointer to the name of this model */

  /* --- end of generic struct GENmodel --- */

  /* model parameters */  int pnp;
  unsigned pnp_Given  :1;
  int npn;
  unsigned npn_Given  :1;
  int LEVEL;
  unsigned LEVEL_Given  :1;  /*LEVEL*/
  double TREF;
  unsigned TREF_Given  :1;  /*TREF*/
  double DTA;
  unsigned DTA_Given  :1;  /*DTA*/
  int EXMOD;
  unsigned EXMOD_Given  :1;  /*EXMOD*/
  int EXPHI;
  unsigned EXPHI_Given  :1;  /*EXPHI*/
  int EXAVL;
  unsigned EXAVL_Given  :1;  /*EXAVL*/
  double IS;
  unsigned IS_Given  :1;  /*IS*/
  double IK;
  unsigned IK_Given  :1;  /*IK*/
  double VER;
  unsigned VER_Given  :1;  /*VER*/
  double VEF;
  unsigned VEF_Given  :1;  /*VEF*/
  double BF;
  unsigned BF_Given  :1;  /*BF*/
  double IBF;
  unsigned IBF_Given  :1;  /*IBF*/
  double MLF;
  unsigned MLF_Given  :1;  /*MLF*/
  double XIBI;
  unsigned XIBI_Given  :1;  /*XIBI*/
  double IZEB;
  unsigned IZEB_Given  :1;  /*IZEB*/
  double NZEB;
  unsigned NZEB_Given  :1;  /*NZEB*/
  double BRI;
  unsigned BRI_Given  :1;  /*BRI*/
  double IBR;
  unsigned IBR_Given  :1;  /*IBR*/
  double VLR;
  unsigned VLR_Given  :1;  /*VLR*/
  double XEXT;
  unsigned XEXT_Given  :1;  /*XEXT*/
  double WAVL;
  unsigned WAVL_Given  :1;  /*WAVL*/
  double VAVL;
  unsigned VAVL_Given  :1;  /*VAVL*/
  double SFH;
  unsigned SFH_Given  :1;  /*SFH*/
  double RE;
  unsigned RE_Given  :1;  /*RE*/
  double RBC;
  unsigned RBC_Given  :1;  /*RBC*/
  double RBV;
  unsigned RBV_Given  :1;  /*RBV*/
  double RCC;
  unsigned RCC_Given  :1;  /*RCC*/
  double RCV;
  unsigned RCV_Given  :1;  /*RCV*/
  double SCRCV;
  unsigned SCRCV_Given  :1;  /*SCRCV*/
  double IHC;
  unsigned IHC_Given  :1;  /*IHC*/
  double AXI;
  unsigned AXI_Given  :1;  /*AXI*/
  double CJE;
  unsigned CJE_Given  :1;  /*CJE*/
  double VDE;
  unsigned VDE_Given  :1;  /*VDE*/
  double PE;
  unsigned PE_Given  :1;  /*PE*/
  double XCJE;
  unsigned XCJE_Given  :1;  /*XCJE*/
  double CBEO;
  unsigned CBEO_Given  :1;  /*CBEO*/
  double CJC;
  unsigned CJC_Given  :1;  /*CJC*/
  double VDC;
  unsigned VDC_Given  :1;  /*VDC*/
  double PC;
  unsigned PC_Given  :1;  /*PC*/
  double XP;
  unsigned XP_Given  :1;  /*XP*/
  double MC;
  unsigned MC_Given  :1;  /*MC*/
  double XCJC;
  unsigned XCJC_Given  :1;  /*XCJC*/
  double RCBLX;
  unsigned RCBLX_Given  :1;  /*RCBLX*/
  double RCBLI;
  unsigned RCBLI_Given  :1;  /*RCBLI*/
  double CBCO;
  unsigned CBCO_Given  :1;  /*CBCO*/
  double MTAU;
  unsigned MTAU_Given  :1;  /*MTAU*/
  double TAUE;
  unsigned TAUE_Given  :1;  /*TAUE*/
  double TAUB;
  unsigned TAUB_Given  :1;  /*TAUB*/
  double TEPI;
  unsigned TEPI_Given  :1;  /*TEPI*/
  double TAUR;
  unsigned TAUR_Given  :1;  /*TAUR*/
  double DEG;
  unsigned DEG_Given  :1;  /*DEG*/
  double XREC;
  unsigned XREC_Given  :1;  /*XREC*/
  double AQBO;
  unsigned AQBO_Given  :1;  /*AQBO*/
  double AE;
  unsigned AE_Given  :1;  /*AE*/
  double AB;
  unsigned AB_Given  :1;  /*AB*/
  double AEPI;
  unsigned AEPI_Given  :1;  /*AEPI*/
  double AEX;
  unsigned AEX_Given  :1;  /*AEX*/
  double AC;
  unsigned AC_Given  :1;  /*AC*/
  double ACBL;
  unsigned ACBL_Given  :1;  /*ACBL*/
  double DVGBF;
  unsigned DVGBF_Given  :1;  /*DVGBF*/
  double DVGBR;
  unsigned DVGBR_Given  :1;  /*DVGBR*/
  double VGB;
  unsigned VGB_Given  :1;  /*VGB*/
  double VGC;
  unsigned VGC_Given  :1;  /*VGC*/
  double VGJ;
  unsigned VGJ_Given  :1;  /*VGJ*/
  double VGZEB;
  unsigned VGZEB_Given  :1;  /*VGZEB*/
  double AVGEB;
  unsigned AVGEB_Given  :1;  /*AVGEB*/
  double TVGEB;
  unsigned TVGEB_Given  :1;  /*TVGEB*/
  double DVGTE;
  unsigned DVGTE_Given  :1;  /*DVGTE*/
  double DAIS;
  unsigned DAIS_Given  :1;  /*DAIS*/
  double AF;
  unsigned AF_Given  :1;  /*AF*/
  double KF;
  unsigned KF_Given  :1;  /*KF*/
  double KFN;
  unsigned KFN_Given  :1;  /*KFN*/
  int KAVL;
  unsigned KAVL_Given  :1;  /*KAVL*/
  double ISS;
  unsigned ISS_Given  :1;  /*ISS*/
  double ICSS;
  unsigned ICSS_Given  :1;  /*ICSS*/
  double IKS;
  unsigned IKS_Given  :1;  /*IKS*/
  double CJS;
  unsigned CJS_Given  :1;  /*CJS*/
  double VDS;
  unsigned VDS_Given  :1;  /*VDS*/
  double PS;
  unsigned PS_Given  :1;  /*PS*/
  double VGS;
  unsigned VGS_Given  :1;  /*VGS*/
  double AS;
  unsigned AS_Given  :1;  /*AS*/
  double ASUB;
  unsigned ASUB_Given  :1;  /*ASUB*/
  double RTH;
  unsigned RTH_Given  :1;  /*RTH*/
  double CTH;
  unsigned CTH_Given  :1;  /*CTH*/
  double ATH;
  unsigned ATH_Given  :1;  /*ATH*/
  double MULT;
  unsigned MULT_Given  :1;  /*MULT*/
  int TYPE;
  unsigned TYPE_Given  :1;  /*TYPE*/
  double GMIN;
  unsigned GMIN_Given  :1;  /*GMIN*/

  /* variable */

} bjt504tmodel;
  /* flags */
typedef enum {
  bjt504t_model_pnp,
  bjt504t_model_npn,
  bjt504t_model_LEVEL,
  bjt504t_model_TREF,
  bjt504t_model_DTA,
  bjt504t_model_EXMOD,
  bjt504t_model_EXPHI,
  bjt504t_model_EXAVL,
  bjt504t_model_IS,
  bjt504t_model_IK,
  bjt504t_model_VER,
  bjt504t_model_VEF,
  bjt504t_model_BF,
  bjt504t_model_IBF,
  bjt504t_model_MLF,
  bjt504t_model_XIBI,
  bjt504t_model_IZEB,
  bjt504t_model_NZEB,
  bjt504t_model_BRI,
  bjt504t_model_IBR,
  bjt504t_model_VLR,
  bjt504t_model_XEXT,
  bjt504t_model_WAVL,
  bjt504t_model_VAVL,
  bjt504t_model_SFH,
  bjt504t_model_RE,
  bjt504t_model_RBC,
  bjt504t_model_RBV,
  bjt504t_model_RCC,
  bjt504t_model_RCV,
  bjt504t_model_SCRCV,
  bjt504t_model_IHC,
  bjt504t_model_AXI,
  bjt504t_model_CJE,
  bjt504t_model_VDE,
  bjt504t_model_PE,
  bjt504t_model_XCJE,
  bjt504t_model_CBEO,
  bjt504t_model_CJC,
  bjt504t_model_VDC,
  bjt504t_model_PC,
  bjt504t_model_XP,
  bjt504t_model_MC,
  bjt504t_model_XCJC,
  bjt504t_model_RCBLX,
  bjt504t_model_RCBLI,
  bjt504t_model_CBCO,
  bjt504t_model_MTAU,
  bjt504t_model_TAUE,
  bjt504t_model_TAUB,
  bjt504t_model_TEPI,
  bjt504t_model_TAUR,
  bjt504t_model_DEG,
  bjt504t_model_XREC,
  bjt504t_model_AQBO,
  bjt504t_model_AE,
  bjt504t_model_AB,
  bjt504t_model_AEPI,
  bjt504t_model_AEX,
  bjt504t_model_AC,
  bjt504t_model_ACBL,
  bjt504t_model_DVGBF,
  bjt504t_model_DVGBR,
  bjt504t_model_VGB,
  bjt504t_model_VGC,
  bjt504t_model_VGJ,
  bjt504t_model_VGZEB,
  bjt504t_model_AVGEB,
  bjt504t_model_TVGEB,
  bjt504t_model_DVGTE,
  bjt504t_model_DAIS,
  bjt504t_model_AF,
  bjt504t_model_KF,
  bjt504t_model_KFN,
  bjt504t_model_KAVL,
  bjt504t_model_ISS,
  bjt504t_model_ICSS,
  bjt504t_model_IKS,
  bjt504t_model_CJS,
  bjt504t_model_VDS,
  bjt504t_model_PS,
  bjt504t_model_VGS,
  bjt504t_model_AS,
  bjt504t_model_ASUB,
  bjt504t_model_RTH,
  bjt504t_model_CTH,
  bjt504t_model_ATH,
  bjt504t_model_MULT,
  bjt504t_model_TYPE,
  bjt504t_model_GMIN,
  DUMMY_MODEL
} e_bjt504t_model;
typedef enum {
  DUMMY_INSTANCE
} e_bjt504t_instance;


#include "bjt504text.h"

#endif /*bjt504t*/
