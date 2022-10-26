//operator overloading in Cpp
//operator overloading is compile time polymorphism
#include<iostream>
using namespace std;
class complex_num{
  private:
    int real, imag;
  public:
   complex_num(){   //parameter less constructor
     this->real=0;
     this->imag=0;
   }
   complex_num(int r,int i){  //parameterized construcutor for two arguments
     this->real=r;
     this->imag=i;
   }
   void display(){
     cout<<this->real<<"+"<<this->imag<<"i"<<endl;
   }
   complex_num operator +(complex_num c){  //function overloading
     complex_num temp;
     temp.real=real+c.real;
     temp.imag=imag+c.imag;
     return temp;
   }
   ~complex_num(){  //destructor
     this->real=0;
     this->imag=0;
   }
};
int main(void){
  complex_num c1(5,9);
  complex_num c2(6,10);
  complex_num c3;
  c3=c1+c2; //Internally for compiler c3=c1.operator+(c2)
  c3.display();

  return 0;
}
