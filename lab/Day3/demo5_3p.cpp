//Dynamic memory allocation for an object in Cpp
#include<iostream>
#include<cstdlib> //or #include<stdlib.h> to access c library
using namespace std;
class complex_num{
  private:
    int real;
    int imag;
  public:
    void accept(){
      cin>>this->real;
      cin>>this->imag;
    }
    void display(){
      cout<<this->real<<endl;
      cout<<this->imag<<endl;
    }
    complex_num(int real, int imag){  //Constructor with two parameter
      this->real=real;
      this->imag=imag;
      cout<<"Inside two parameter constructor"<<endl;
    }
    complex_num(){              //Consturctor without parameter
      this->real=10;
      this->imag=20;
      cout<<"parameterless constructor"<<endl;
    } 
    complex_num(int value){     //Constructor with one parameter
      this->real=value;
      this->imag=value;
      cout<<"Inside one parameter constructor"<<endl;
    }
    ~complex_num(){
      this->real=0;
      this->imag=0;
      cout<<"Inside destructor block"<<endl;
    }
}; //end of class complex_num
int main(void){
  complex_num *ptr1=NULL;
  ptr1=(complex_num*)malloc(1*sizeof(complex_num)); //Dynamic memory allocation using C syntax
                                                    //malloc function cannot call Constructor neither can free call the destructor
  ptr1->display();

  complex_num *ptr2=NULL;
  ptr2=new complex_num;   //parameter less constructor call
  ptr2->display();

  complex_num *ptr3=NULL;
  ptr3=new complex_num(11); //constructor call with one parameter
  ptr3->display();

  complex_num *ptr4=NULL;
  ptr4=new complex_num(11,22); //constructor call with two parameter //new operator calls the Consturctor
  ptr4->display();
  delete ptr4; delete ptr2;delete ptr3;free(ptr1); //delete operator calls the destructor
  ptr4=NULL;
  ptr2=NULL;
  ptr3=NULL;
  ptr1=NULL;

  return 0;
}//end of main

