//Type of member functions used in a Class
//construct and destructor
//Inspector(getter)- Inspector can not modify the state of a object.
#include<iostream>
using namespace std;
class complex_num{
  private:
    int real;
    int imag;
  public:
    void input(){                                      //input facitlity
      cout<<"Enter real number:"<<endl;
      cin>>this->real;
      cout<<"Enter imag number:"<<endl;
      cin>>this->imag;
    }
    void output(){                                     //input facitlity
      cout<<"-------------------------output block--------------------"<<endl;
      cout<<"The real number is:"<<this->real<<endl;
      cout<<"The imag number is:"<<this->imag<<endl;
      cout<<"-------------------------output block--------------------"<<endl;
    }
    complex_num(int real, int imag){                   //two parameter constructor
      cout<<"-------------------------constructor block---------------"<<endl;
      this->real=real;
      this->imag=imag;
      cout<<"calling constructor"<<endl;
      cout<<"-------------------------constructor block---------------"<<endl;
    }
    int get_real(){                                    //Inspector(getter)
      return this->real;
    }
    int get_imag(){                                    //Inspector(getter)
      return this->imag;
    }
    ~complex_num(){                                    //destructor 
      cout<<"-------------------------destructor block----------------"<<endl;
      this->real=0;
      this->imag=0;
      cout<<"calling destructor"<<endl;
      cout<<"-------------------------destructor block----------------"<<endl;
    }

};
int main(void){
  int r,i;
  complex_num c1(r,i);
  c1.input();
  c1.output();
  r=c1.get_real();
  i=c1.get_imag();
  cout<<"-----------------------------printing with getters-----------"<<endl;
  cout<<"c1 with getter get_real: "<<r<<endl;
  cout<<"c1 with getter get_imag: "<<i<<endl;
  cout<<"-----------------------------printing with getters-----------"<<endl;
  return 0;
}
