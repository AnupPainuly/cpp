//Sizeof Empty class and Empty struct in Cpp
#include<iostream>
#include<iomanip>
//#pragma pack(1)
using namespace std;
class empty_one{

};
struct empty_two{

};
int main(void){
  empty_one e1;
  empty_two e2;
  cout<<"Size of an EMPTY CLASS:"<<sizeof(class empty_one)<<endl;
  cout<<"Size of the OBJECT of an EMPTY CLASS:"<<sizeof(e1)<<endl;

  cout<<"Size of an EMPTY STRUCT:"<<sizeof(struct empty_two)<<endl;
  cout<<"Size of the variable of an EMPTY STRUCT:"<<sizeof(e2)<<endl;
  return 0;
}
/* The size of empty class and empty struct and their objects is 1 byte.
