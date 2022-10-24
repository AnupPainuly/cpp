//Types of member function
//Input/output facilities
#include<iostream>
using namespace std;
class complex_num{
  private: //access specifiers
    int real;
    int imag;
  public: //acess specifiers
    void input(){ //facility
      cout<<"Enter the numbers"<<endl;
      cout<<"Enter the real num:"<<endl;
      cin>>this->real;
      cout<<"Enter the imag num:"<<endl;
      cin>>this->imag;
    }
    void output(){ //facility
      cout<<"The real num is:"<<this->real<<endl;
      cout<<"The imag num is:"<<this->imag<<endl;
    }
};
//Since we have not written our own constructor compiler will provide a default constructor.
complex_num c1;   //decalaration of a global variable/object
int main(void){
  complex_num c2; //decalaration of local variable/object
  cout<<"Calling output facility for local object of complex_num class######"<<endl;
  c2.output();
  static complex_num c3; ///decalaration of static variable/object
  cout<<"Calling output facility  for static object of complex_num class######"<<endl;
  c3.output();
  cout<<"Calling output facility  for global object of complex_num class######"<<endl;
  c1.output();
  
  return 0;
}
/* The demonstration based on storage classes global,static, local and what the are default values for these objects/variables.
 */
