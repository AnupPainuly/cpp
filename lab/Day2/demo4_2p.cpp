//I/O failities and constructors
#include<iostream>
using namespace std;
class complex_num{
  private:
    int real;
    int imag;
  public:
    void input(){                   //Input facility
      cout<<"Enter the real number"<<endl;
      cin>>this->real;
      cout<<"Enter the imag number"<<endl;
      cin>>this->imag;
    }
    void output(){                  //Output facility
      cout<<"The real number is:"<<this->real<<endl;
      cout<<"The imag number is:"<<this->imag<<endl;
    }
    complex_num(){                  //parameterless constructor
      this->real=10;
      this->imag=20;
      cout<<"Inside the parameter less constructor block"<<endl;
    }
    complex_num(int value){         //Constructor with one argument
    this->real=value;
    this->imag=value;
    cout<<"Inside the ONE ARGUMENT constructor block"<<endl;
    }
    complex_num(int real, int imag){ //Constructor with two arguments.
    this->real=real;
    this->imag=imag;
    cout<<"Inside the TWO ARGUMENT constructor block"<<endl;
    }
};
int main(void){
  complex_num c1;
  c1.output();

  complex_num c2(100);
  c2.output();

  complex_num c3(111,222);
  c3.output();
}
