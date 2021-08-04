// using sccz80 1.99c

//assembly files are in ramlow.asm as indicated by ramlow.lst
//#pragma output CRT_ORG_CODE = 24000

//CONTENDED RAM
#include <arch/zx.h>
#include <input.h>
#include <stdlib.h>//standard library
#include <stdio.h>//standard input output
#include <intrinsic.h>//temp to place labels
//powerful troubleshooting tool

//if this is before any custom headers
//it will set everything below it to be
//in the correct memory slot
/*
void placement_in_ramlow(void)
{
    __asm
    SECTION CONTENDED
    PUBLIC _Variable_in_contended
    _Variable_in_contended:
    defb 33
    __endasm
}*/


#include "externs.h"
#include "variables.h"
#include "routines.h"



// do not have main() here at all since we are just compiling to object files
//we are just putting functions here
//IMPORTANT need to have blank line at very end

