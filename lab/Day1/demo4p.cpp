#include<stdio.h>
#define sq(a) a*a//macro function is command to compiler
inline int square(int a); //inline function decalaration. inline function is a request to compiler.It may not be executed in case  of jump statements, switch, loops,static variables.
int main(void)
{
  int x=5,y=0;
  y=sq(x);
  printf("\nprinting with macro %d,%d",x,y);
  
  printf("\nPrinting using the inline function %d,%d",x,y);
  return 0;

}
inline int square(int a){  //inline function definition
  return a*a;
}

// g++ -E -o <filename.i> <filename.cpp>
//where flag -E and -o do the below operations.
/* -E     ----Stop after the preprocessing stage; do not run the compiler proper.  The output is in the form of preprocessed source
           code, which is sent to the standard output*/

/* -o File ---Place the primary output in file file.  This applies to whatever sort of output is being produced, whether it be an
executable file, an object file, an assembler file or preprocessed C code.*/
