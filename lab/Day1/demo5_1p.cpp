//POLYMORPHISM
//Compile time function overloading
//case:2 different types of function arguments
#include<iostream>
using namespace std;
int sum(int a, int b){
  return a+b;
}//end of func def sum. The mangle name for this function is sum@@int,int
float sum(float a, float b){
  return a+b;
}//end of func def sum. The mangle name for this function is sum@@float,float
int main(void){
  int a,b,ans;
  float a1,b1,ans1;
  cout<<"Enter the two integer numbers for addition"<<endl;
  cin>>a>>b;
  ans=sum(a,b);
  cout<<"The addition using funtion with int arg:"<<ans<<endl;
  cout<<"---------------------------"<<endl;
  cout<<"Enter the two float numbers for addition"<<endl;
  cin>>a1>>b1;
  ans1=sum(a1,b1);
  cout<<"The addition using function with float arg:"<<ans1<<endl;
}
