//Try-throw-catch error handling in Cpp
#include<iostream>
#include<ctype.h>
using namespace std;
int main(void){
  int num1,num2,ans;
  cout<<"Enter two numbers for division"<<endl;
  cin>>num1>>num2;
  try{
    if(num2==0){
      //throw __LINE__+2;
      throw 'A';
    }
    ans=num1/num2;
    cout<<"The answer for division is:"<<ans<<endl;
  }
  catch(int no){
    cout<<"Error at line "<<no<<" :can not divide by zero"<<endl;
    cout<<"File Name: "<<__FILE__<<endl;
    cout<<"Date: "<<__DATE__<<endl;
    cout<<"Time: "<<__TIME__<<endl;
  }
  catch(char ch){
    cout<<"Inside catch char block"<<endl;
    cout<<"Cannot divide by zero:"<<ch<<endl;
  }
  catch(...){
    cout<<"Inside generic catch block"<<endl;
    cout<<"ERRRRRRRRRRRRRRR"<<endl;
  }
  return 0;
}
