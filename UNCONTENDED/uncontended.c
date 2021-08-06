// using sccz80 1.99c

#include <arch/zx.h>
#include <stdio.h>//standard input output
//#include <input.h>
//#include <stdlib.h>//standard library

#include "variables.h"
#include "uncontended.h"
#include "externs.h"

void main ()
{
    zx_cls(PAPER_WHITE | INK_RED);
    printf ("Main () running in uncontended\n");

    printf ("_Variable_in_contended = %d\n", Variable_in_contended);//should be 27
    printf ("_Variable_in_Bank0 = %d\n", Variable_in_Bank0);

    printf ("tom = %d\n", tom);
    printf ("dick = %d\n", dick);
    printf ("harry = %d\n", harry);
    printf ("eve = %d\n", eve);
    printf ("bob = %d\n\n", bob);


    harry = add_two_numbers (tom, dick);
    printf ("Add 2 numbers %d + %d = %d\n", tom, dick, harry);

    harry = subtract2numbers (Variable_in_Bank0, eve);
    printf ("Subtract 2 numbers %d - %d = %d\n", Variable_in_Bank0, eve, harry);

    harry = multiply2numbers (Variable_in_contended, bob);
    printf ("Multiply 2 numbers %d * %d = %d\n", Variable_in_contended, bob, harry);

    harry = add_two_numbers (Variable_in_contended, Variable_in_Bank0);
    printf ("Add 2 numbers %d + %d = %d\n", Variable_in_contended, Variable_in_Bank0, harry);

    while (1);
}


//must have blank line at end
