//Topic: Compile time Function overloading.
//Compile time function overloading can be done with three cases of arguments.
//1.Same type of arguments but DIFFERENT NUMBER of arguments
//2.Different type of arguments
//2.Same type of arguments but the order of arguments is different
//Note:Return type of a functions is not considered while funciton overloading which can be seen in the mangle name of that func.
#include<iostream>
using namespace std;
int sum(int a, int b){
  return a+b;
}//end of function sum with same type of arguments but differnet no of argumetns
 //the mangle name of the function which can found in assembly file sum@@int,int 
 int sum(int a, int b,int c){
  return a+b+c;
}//end of function 'sum' with three same type arguments but different no of arguments.
 //the mangle name of the function which can found in assembly file sum@@int,int,int
int main(void){
  int a,b,c,ans;
  cout<<"Enter two numbers for addition"<<endl;
  cin>>a>>b;
  ans=sum(a,b);
  cout<<"The sum with two arguments is:"<<ans<<endl;
  cout<<"-----------------------------------------"<<endl;
  cout<<"Enter three numbers for addition:"<<endl;
  cin>>a>>b>>c;
  ans=sum(a,b,c);
  cout<<"The sum with three arguments is:"<<ans<<endl;

  return 0;
  
}

//g++ -S <filename.cpp> command line instruction to get output into .asm file

