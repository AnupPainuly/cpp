//types of memeber function
//constructor and destructor
//getter(inspector) and setter(mutator)
//getter can modify the state of an object however inspector can NOT modify the state of an object.
#include<iostream>
using namespace std;
class complex_num{
  private:
    int real;
    int imag;
  public:
    //decalaring input facility
    void input(){
      cout<<"Enter the real num: "<<endl;
      cin>>this->real;
      cout<<"Enter the imag num: "<<endl;
      cin>>this->imag;
    }
    //decalaring output facility
    void output(){
      cout<<"The real num is: "<<this->real<<endl;
      cout<<"The imag num is: "<<this->imag<<endl;

    }
    //decalaring two parameter constructor
    complex_num(int real, int imag){
      this->real=real;
      this->imag=imag;
    }
    //decalaring a getter
    int get_real(){
      return this->real;
    }
    //decalaring a getter(mutator)
    int get_imag(){
      return this->imag;
    }
    //decalaring a setter(mutator)
    void set_real(int real){
      cout<<"Setting the real value:"<<endl;
      cin>>this->real;
      this->real=real;
    }
    //decalaring a setter(mutator)
    void set_imag(int imag){
      cout<<"Setting the real value:"<<endl;
      cin>>this->imag;
      this->imag=imag;
    }
    //declaring a destructor
    ~complex_num(){
      this->real=0;
      this->imag=0;
    }
};
int main(void){
  int r,i;
  complex_num c1(r,i);
  c1.input();
  c1.output();

  r=c1.get_real();
  i=c1.get_imag();
  cout<<"Printing c1 from getters"<<endl;
  cout<<"the real num by invoking getter"<<r<<endl;
  cout<<"the imag num by invoking getter"<<i<<endl;
  
  c1.set_real(r);
  c1.set_imag(i);
  c1.output();

  return 0;
}
