//swap function: Call by address in Cpp
#include<iostream>
using namespace std;
void swap(int *n1, int *n2){ //n1 and n2 are formal arguments
  cout<<"Before swapping in swap: value of n1: "<<*n1<<" & value of n2: "<<*n2<<endl;
  int temp=*n1;
  *n1=*n2;
  *n2=temp;
  cout<<"After swapping in swap: value of n1: "<<*n1<<" & value of n2: "<<*n2<<endl;
  return;
}
int main(void){
  int num1=10, num2=20; //num1 and num2 are actual arguments
  cout<<"Before swapping in main: value of num1: "<<num1<<" & value of num2: "<<num2<<endl;
  swap(&num1,&num2);
  cout<<"After swapping in main: value of num1: "<<num1<<" & value of num2: "<<num2<<endl;
  return 0;
}
