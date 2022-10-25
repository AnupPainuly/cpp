//Dynamic allocation of memory for one character in Cpp.
#include<iostream>
using namespace std;
int main(void){
  char *ptr =NULL;
  ptr=new char('A'); //this can be written as ptr=(*char)malloc(1*sizeof(char))
  cout<<"The char at address in ptr:"<<*ptr<<endl;
  *ptr = 'B';
  cout<<"The char at address in ptr:"<<*ptr<<endl;
  cout<<"Enter the new char:"<<endl;
  cin>>*ptr;
  cout<<"The char at address in ptr:"<<*ptr<<endl;
  delete ptr;
  return 0;
}
//memory of an array can be freed by 'delete [] ptr'
