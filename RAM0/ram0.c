// using sccz80 1.99c

// assembly files are in ram0Z.asm as
// indicated by ramMain.lst

// this has been pushed to zpragma.inc
//#pragma output CRT_ORG_CODE = 49152

//be sure to bank to this slot if you
//plan on using other banks

#include <arch/zx.h>
#include <input.h>
#include <stdlib.h>//standard library
#include <stdio.h>//standard input output

//we are just putting functions here

#include "ram0.h"

// do not have main() here at all since
// we are just compiling to object files
// you will get a RET inserted automatically


//must have blank line at end
