#include<iostream>
using namespace std;
class Demo_const{
  private:
    mutable int a;
    int b;
    const int c;
    int const d;
  public:
    //constructing the objects of a class with the help of constructor. While making objects constant it is advisable to pass all t
    //objects via constructor intializer list as below.
    //A constructor does not have a return type and it has same name as its class.
    Demo_const():a(10), b(20), c(30), d(40) //parameter less constructor
  {
    this->a=10;
    this->b=20;
    //this->c=30; //can not assign values as c constant data member
    //this->d=40; //can not assign values as d is also a constant data member
  }
    Demo_const(int a, int b, int c, int d):a(a),b(b),c(c),d(d)//parameterised constructor
  {
    this->a=a;
    this->b=b;
    //this->c=c;  //can not assign values as c constant data member
    //this->d=d; //can not assign values as d is also a constant data member
  }
    void display()
    {
      this->a=111;
      this->b=222;
      //this->c=333; //can not be modified as c is constant data memeber
      //this->d=444; //can not be modified as c is constant data memeber
      cout<<"this->a="<<this->a<<endl;
      cout<<"this->b="<<this->b<<endl;
      cout<<"this->c="<<this->c<<endl;
      cout<<"this->d="<<this->d<<endl;
      
    }
    void print() const  //making the member function constant should be done in following way "<member funtion> const"
    {
      this->a=111; //a can be modified as it is set to mutable data memeber.
                   //when member function is constant data member can be modified only if it set to mutable
      //this->b=222; //b can not be modified as member function is constant
      //this->c=333; //can not be modified as c is constant data memeber
      //this->d=444; //can not be modified as c is constant data memeber
      cout<<"this->a"<<this->a<<endl;
      cout<<"this->b"<<this-b<<endl;
      cout<<"this->c"<<this-c<<endl;
      cout<<"this->d"<<this-d<<endl;
    } 
    ~Demo_const()
    {
      this->a=0;
      this->b=0;
      //this->c=0; //not allowed to destruct as data memeber c is set to constant
      //this->d=0; //not allowed to destruct as data memeber c is set to constant
    }
};
int main(void){
  Demo_const c1;
  cout<<"c1 print()"<<endl;
  c1.print(); //non constant object c1 can call constant member function print()
  cout<<"c1 display()"<<endl;
  c1.display(); //non constant object c1 can call non constant member function display()

  const Demo_const c2(11,22,33,44);
  cout<<"c2 print()"<<endl;
  c2.print(); //const object c2 can call constant member function print()

  cout<<"c2 display()"<<endl;
  //c2.display(); //const object c2 can call non constant member function display()

  return 0;

}
