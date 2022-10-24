//Input and Output in C++
#include<iostream>
using namespace std;
int main(void){
  int num1, num2;
  cout<<"Enter the numbers"<<endl;//endl represents newline character like \n in C
  cin>>num1>>num2;    //you dont dont have to reference the variables while taking input as we do in C e.g scanf("%d",&num1)
  cout<<"The numbers are "<<num1<<" and "<<num2<<endl; //we also do not need format specifiers in C++
  return 0;

}
