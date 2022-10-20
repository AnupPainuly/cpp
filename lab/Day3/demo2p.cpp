/* Demo for reference in cpp*/
#include<iostream>
using namespace std;
int main(void)
{
  int a = 10;
  //a reference has to be decalred and intialized on the same line unlike a pointer which can be decalred first and then can be intialized.
  int &r=a; // r is reference to variable a. internally it can be represented as int const *r =&a.
            // it also means that a and &r are one and the same.
  cout<<"value of a:"<<a<<endl;
  cout<<"value of &r:"<<r<<endl;  // a reference is automagically deferenced unlike a pointer.

  a++;
  cout<<"value of 'a' after increment:"<<a<<endl;
  cout<<"value of &r after increment:"<<r<<endl;

  r++;
  cout<<"value of 'a' after incrementing a reference to 'a':"<<a<<endl;
  cout<<"value of &r after incrementing a reference to 'a':"<<r<<endl;

  return 0;
}
