//Topic:Nested Namspace 
#include<iostream>
using namespace std;
namespace N1{
  int num1=10;
  int num2=20;
  namespace N2{
    int num1=30;
    int num3=40;
  }//end of namespace N2.
}//end of namespace N1.
int num1=100;//decalaring global variable.
int main(void){
  int num1=1000;//decalaring a local variable.
  //accessing the local variable
  cout<<"printing local variable:"<<num1<<endl;
  //accessing the global variable
  cout<<"printing the gloabal variable:"<<::num1<<endl;
  //accessing the variables from namespace N1.
  cout<<"printing the Namespace N1 variables:"<<N1::num1<<endl;
  cout<<"printing the Namespace N1 variables:"<<N1::num2<<endl;
  //accessing the variables from Namespace N2.
  cout<<"printing the Namespace N1 variables:"<<N1::N2::num1<<endl;
  cout<<"printing the Namespace N1 variables:"<<N1::N2::num3<<endl;
  using namespace N1;
  cout<<"printing the namespace N1 varibles:"<<num2<<endl;
  using namespace N1::N2;
  cout<<"printing the namespace N1 varibles:"<<num3<<endl;

  return 0;
}//end of main func
