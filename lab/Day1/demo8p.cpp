//Topic:Scope resolution
//Scope resolution operator has to be used to resolve the name conflict
#include<iostream>
using namespace std;
int num=10;
int main(void){
  int num=100;
  cout<<"Printing the value of num from the block:"<<num<<endl; //without scope resolution will print from current block
  cout<<"Printing the value of globally decalred variable num:"<<::num<<endl;//with scope resolution will print global variable
  return 0;
}
