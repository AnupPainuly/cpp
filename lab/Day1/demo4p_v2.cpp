#include<iostream>
using namespace std;
#define sq(a) a*a
inline int square( int a );
int main(void){
  int x=5,y=0;
  y=sq(x);
  cout<<"The value of y with macro:"<<x<<","<<y<<endl;
  y=square(y);
  cout<<"The value of y with inline function:"<<x<<","<<y<<endl;

  return 0;
}
inline int square(int a){
  return a*a;
}

// g++ -E -o <filename.i> <filename.cpp>
/*macro is a command to the compiler however inline functions is request to the compiler.
 * inline functions are not executed in case of jump statments, loops, static variables,switch.
 */
