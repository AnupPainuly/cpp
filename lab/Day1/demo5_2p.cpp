//POLYMORPHISM
//Compile time function overloading
//Case 3:Different order of arguments
#include<iostream>
using namespace std;
float sum(int a, float b){
  return a+b;
}//end of func def sum
float sum(float a,int b){
  return a+b;
}
int main(void){
  int a,b;
  float a1,b1,ans;
  cout<<"Enter two numbers"<<endl;
  cin>>a>>b1;
  ans=sum(a,b1);
  cout<<"The sum for int+float:"<<ans<<endl;
  cout<<"------------"<<endl;
  cout<<"Enter two numbers"<<endl;
  cin>>a1>>b;
  ans=sum(a1,b);
  cout<<"The sum for float+int:"<<ans<<endl;
}
