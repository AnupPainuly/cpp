//Demonstration of how we can NOT change the value of const variable using pointer in c.
//to store a value of const variable the pointer shoud be const as well
#include<iostream>
using namespace std;
int main(void){
  float const pi=3.14f; // an alternative way to write is const float pi=3.14f;
  //float *ptr=&pi; //can not do this due reason in the line# 5.
  const float *ptr=&pi;
  cout<<"value of pi="<<pi<<"; value at address in pointer *ptr= "<<*ptr<<endl;
  //*ptr=4.14f; //can not change the value at address in ptr as it decalared const. in c we can do this although with a warning.
  return 0;
}
