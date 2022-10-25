//Dynamic memory allocatin in Cpp as compared to C.
//allocate memory for single varible of int type.
#include<iostream>
using namespace std;
int main(void){
  int *ptr=NULL;
  ptr=new int(11);
  cout<<"The value at address in ptr"<<*ptr<<endl;
  *ptr=22;
  cout<<"The value at address in ptr"<<*ptr<<endl;
  cout<<"Enter new value at address in ptr"<<endl;
  cin>>*ptr;
  cout<<"The value at address in ptr"<<*ptr<<endl;
  delete ptr;
  return 0;
}
