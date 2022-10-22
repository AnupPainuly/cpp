//Topic:Scope resolution
//Scope resolution operator has to be used to resolve the name conflict
#include<iostream>
using namespace std;
namespace N1{
  int num1=10;
  int num2=20;
}//declaring variables in namespace
int num1=100; //declaring variable globally
int main(void){
  int num1=1000; //decalaring varibale locally within the main block
  cout<<"accessing local variable:"<<num1<<endl;
  cout<<"accessing global variable inside the block:"<<::num1<<endl;

  cout<<"accessing the variables decalared inside namespace:"<<N1::num1<<endl;
  cout<<"accessing the variables decalared inside namespace:"<<N1::num2<<endl;

  using namespace N1;
  cout<<"accessing the variables decalared inside namespace:"<<N1::num1<<endl;
  cout<<"accessing the variables decalared inside namespace:"<<N1::num2<<endl;
  cout<<"accessing local variable:"<<num1<<endl;
  cout<<"accessing namespace variable:"<<num2<<endl; //using namespace N1 is required to access the namespace variable without-
                                                    // using scope resolution opreator

  return 0;
}
