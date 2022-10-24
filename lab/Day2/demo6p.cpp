//Const Data members & Const member functions & Const Objects in Cpp
//whether or not a non constant object can call 'non constant' & 'constant' member functions?
//whether or not a constant object can call 'non constant' & 'constant' member functions?
//how to use constant data members in a constructor?
#include<iostream>
using namespace std;
class demo_const{
  private:
    int data_member1;
    int data_member2;
    const int data_member3;  //an alternative way to write const is 'int const data_member3'
    const int data_member4; //an alternative way to write const is 'int const data_member3'

  public:
    //it is good practice to declare not const data members but all the data members in the constructor intializer list.
    demo_const():data_member1(10),data_member2(20),data_member3(30),data_member4(40) //parameter less constructor
    {
        //this->data_member1=10; //valid although we have constructed in the intializer list above
        //this->data_member2=20; //valid although we have constructed in the intializer list above
        //this->data_member3=30; //invalid to construct as data_member3 is const
        //this->data_member4=40; //invalid to construct as data_member4 is const
    }
    demo_const(int data_member1, int data_member2,int data_member3,int data_member4):data_member1(data_member1),data_member2(data_member2),data_member3(data_member3),data_member4(data_member4) //parametrized constructor
    {
      /* no need to intiliaze here because we intialized in the constructor intializer list */
    }
    void accept()
    {
      this->data_member1=11;
      this->data_member2=11;
      //this->data_member3=11; //we can not modify the value of const data member3
      //this->data_member4=11; //we can not modify the value of const data member3

    }
    void display()
    {
      cout<<"Data_member1:"<<this->data_member1<<endl;
      cout<<"Data_member2:"<<this->data_member2<<endl;
      cout<<"Data_member3:"<<this->data_member3<<endl;
      cout<<"Data_member4:"<<this->data_member4<<endl;
    }
    void display_const()const   //declaring a const member function.
    {
      //no data members can be modified inside a const member function. e.g. this->data_member1=12 not allowed.
      cout<<"Data_member1:"<<this->data_member1<<endl;
      cout<<"Data_member2:"<<this->data_member2<<endl;
      cout<<"Data_member3:"<<this->data_member3<<endl;
      cout<<"Data_member4:"<<this->data_member4<<endl;
    }
    ~demo_const(){
      this->data_member1=0;
      this->data_member2=0;
      //this->data_member3=0; //can not de-intialize as data member is const.
      //this->data_member4=0; //can not de-intialize as data member is const.

    }
};
int main(void){
  //decalaration of non const object c1 using parameter less constructor
  demo_const c1; 
  c1.accept();                                                          //non constant object calling non const member function
  c1.display();
  //decalaration of const object c2 using parameterless constructor
  const demo_const c2; 
  //c2.accept()                                                          //const object calling non const member function
  //c2.display();

  //declaration of const object c3 using pararmeterized constructor
  demo_const c3(111,222,333,444);
  c3.accept();
  c3.display_const();                                                   //non constant object calling const members function

  //c2.accept();
  c2.display_const();                                                   //const object calling const member function
  
  return 0;
  
}
/* 
   case 1: non const object.
    case 1.1:non const object calling non const member function. AllOWED
    case 1.2:non const object calling const member function. AllOWED

   case 2: const object.
    case 2.1:const object calling const member function. AllOWED
    case 2.2:const object calling non const member function.  NOT ALLOWED
 */
