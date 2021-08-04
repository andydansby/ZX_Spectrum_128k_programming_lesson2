;--	RAM6.asm
SECTION BANK_06
org 0xc000;;believe this is assumed with target ZX
; everything that follows is in bank 6

PUBLIC _blackout1

_blackout1:

   ld hl, 22528
   ld (hl), 0
   push hl
   pop de
   inc de
   ld bc, 767
   ldir
   ret

PUBLIC _screen3
_screen3:
   BINARY "screen3.bin"

PUBLIC _screen4
_screen4:
   BINARY "screen4.bin"
   
PUBLIC _screen5
_screen5:
   BINARY "screen5.bin"
   
PUBLIC _screen6
_screen6:
   BINARY "screen6.bin"

------------------------
extern void __FASTCALL__ blackout(void);
extern void __FASTCALL__ bank(unsigned char ramBank);


extern void gameISR(void);
extern void __FASTCALL__ bank(unsigned char ramBank);


----------------------------------

Is there a way to assign a C routine to a SECTION?
What I'm trying to accomplish is I have a uncontended  compile and a contended compile.  The uncontended compile (along with other banks) compiled separately and combined in an object file which I import into the main compile.  
However, what is happening is it is placing certain variables and routines in uncontended memory even if they are compiled and defined in the contended section

================
There are several sections the compiler puts stuff into:

codeseg = code
constseg = constant data
bssseg = uninitialized variables
dataseg = initialized variables

You have to change the destination section for each of those segments on the zcc line.

zsdcc can only do codeseg and constseg so the recommended thing to do is declare anything destined for bss or data sections in asm where they can be placed properly.

example of c declarations:

extern int a;   // bss
extern int b = 10;   // data

Then in a separate asm file define the variables placed in a specific section:

SECTION bss_name
PUBLIC _a
_a : defs 2

SECTION data_name
PUBLIC _b
_b : defw 10

That should be "extern int b;".  The C declarations are not creating space - they only tell the compiler the variables exist and are defined elsewhere.

------------------
