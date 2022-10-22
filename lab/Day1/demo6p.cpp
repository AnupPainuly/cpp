//Compile time function overloading
#include<iostream>
using namespace std;
void f1(int a){
  cout<<"Inside int block"<<endl;
}
void f1(float a){
  cout<<"Inside float block"<<endl;
}

void f1(double a){
  cout<<"Inside double block"<<endl;
}
void f1(char a){
  cout<<"Inside char block"<<endl;
}
void f1(void){
  cout<<"Inside void block"<<endl;
}
int main(void){
  f1(10); //This func call will trigger the int block
  f1(10.2);//This func call will trigger the double block
  f1('A');//This func call will trigger the char block
  f1();//This func call will trigger the void block
  f1(10.2f);//This func call will trigger the float block
  f1(10.2F);//This func call will trigger the float block :Note: Capital F means float as well
  f1((int)10.2);//This func call will trigger the int block
  return 0;
}
