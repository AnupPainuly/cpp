//Constructor and Destructor in Cpp. Sequence of their call.
#include<iostream>
using namespace std;
class complex_num{
  private:
    int real;
    int imag;
    int i;
  public:
    void input(){
      cout<<"Enter the real num:"<<endl;
      cin>>this->real;
      cout<<"Enter the imag num:"<<endl;
      cin>>this->imag;
    }
    void output(){
      cout<<"Real num:"<<this->real<<endl;
      cout<<"Imag num:"<<this->imag<<endl;
    }
    complex_num(){                                         //Parameter less constructor
      this->real=10;
      this->imag=20;
      cout<<"Inside the parameter less Constructor"<<endl;
    }
    complex_num(int value){                                //Constructor with one parameter
      this->real=value;
      this->imag=value;
      cout<<"Inside the one parameter  Constructor"<<endl;
    }
    complex_num(int real, int imag){                      //Constructor with two parameter 
      this->real=real;       
      this->imag=imag;
      cout<<"Inside the two parameter Constructor"<<endl;
    }
    ~complex_num(){                                       //Destructor
      this->real=0;
      this->imag=0;
      cout<<"Inside the destructor"<<endl;
    }

};//end of class complex_num
int main(void){
  complex_num c1; //parameter less Constructor call. Note- empty brackets afet object c1 denotes parameterized.
  c1.output();

  complex_num c2(100); // One parameter constructor call
  c2.output();
  
  complex_num c3(11,22); // Two parameter constructor call
  c3.output();

  return 0;
} //end of main
/* Constructor Calls   Destructor Calls
 *       c1                 c3
 *       c2                 c2
 *       c3                 c1
 * Constructor calls follow pus operations in a stack while destructor follow pop operations in a stack.
 */
