//Input and Output in C++ does not require format specifiers
#include<iostream>
using namespace std;
int main(void){

  {
  //int
  int num1,num2;
  cout<<"Enter the numbers"<<endl;
  cin>>num1>>num2;
  cout<<"The integer numbers are "<<num1<<" and "<<num2<<endl;
  }
  cout<<"------------------------"<<endl;
  {
  //float
  float num1,num2;
  cout<<"Enter the numbers"<<endl;
  cin>>num1>>num2;
  cout<<"The floating numbers are "<<num1<<" and "<<num2<<endl;
  }
  cout<<"------------------------"<<endl;
  {
  //character
  char ch1,ch2;
  cout<<"Enter the character"<<endl;
  cin>>ch1>>ch2;
  cout<<"The characters are "<<ch1<<" and "<<ch2<<endl;
  }
  return 0;
}
