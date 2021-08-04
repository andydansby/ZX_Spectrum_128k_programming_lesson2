// using sccz80 1.99c

// assembly files are in ram0Z.asm as
// indicated by ramMain.lst

// this has been pushed to zpragma.inc
//#pragma output CRT_ORG_CODE = 49152
//RAM 0 bankable
//#pragma include:zpragma.inc

//be sure to bank to this slot if you
//plan on using other banks

#include <arch/zx.h>
#include <input.h>
#include <stdlib.h>//standard library
#include <stdio.h>//standard input output
//#include <intrinsic.h>//temp to place labels
//powerful troubleshooting tool

//we are just putting functions here


//if this is before any custom headers
//it will set everything below it to be
//in the correct memory slot

/*
void placement_in_bank0(void)
{
    __asm
    SECTION BANK_00
    PUBLIC _someVariable
    _someVariable:
    defb 25
    __endasm
}
*/

#include "ram0.h"

// do not have main() here at all since
// we are just compiling to object files
// you will get a RET inserted automatically


//must have blank line at end
