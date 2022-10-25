//Swap function: Call by value in Cpp
#include<iostream>
using namespace std;
void swap(int n1,int n2){
  cout<<"Before swapping in swap: value of num1: "<<n1<<" & value of num2: "<<n2<<endl;
  int temp;
  temp=n1;
  n1=n2;
  n2=temp;
  cout<<"After swapping in swap: value of num1: "<<n1<<" & value of num2: "<<n2<<endl;
  return;
}
int main(void){
  int num1=10,num2=20;
  cout<<"Before swapping in main: value of num1: "<<num1<<" & value of num2: "<<num2<<endl;
  swap(num1,num2);
  cout<<"After swapping in main: value of num1: "<<num1<<" & value of num2: "<<num2<<endl;
}
