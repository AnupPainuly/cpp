#include<iostream>
#include<cstring>
using namespace std;
namespace Ncomposition{
  class date{
    private:
      int dd,mm,yy;
    public:
      date(){
        cout<<"Enter the date,month,year"<<endl;
        cin>>this->dd;
        cin>>this->mm;
        cin>>this->yy;
      }
      ~date(){
        this->dd=0;
        this->mm=0;
        this->yy=0;
      }
      void print_date(){
        cout<<"Date:"<<this->dd<<"-"<<this->mm<<"-"<<this->yy<<endl;
      }
      

  };//end of class date
  class address{
    private:
      int pin;
      char city[10];
    public:
      address(){
        cout<<"Enter the address"<<endl;
        cout<<"Enter the pin"<<endl;
        cin>>this->pin;
        cout<<"Enter the city"<<endl;
        cin>>this->city;
      }
      
      void print_address(){
        cout<<"Printing address"<<endl;
        cout<<this->pin<<endl;
        cout<<this->city<<endl;
      }
      ~address(){
        this->pin=0;
        strcpy(this->city,"");
      }

  };//end of class address
  class person{
    private:
      char name[10];
      date dob;
      address per_address;
    public:
      person(){
        cout<<"Enter the name"<<endl;
        cin>>this->name;
      }
      void print_per_info(){
        cout<<"Name:"<<this->name<<endl;
        this->dob.print_date();
        this->per_address.print_address();
      }
      ~person(){
        strcpy(this->name,"");
      }
      
  };//end of class person
  
}//end of Ncompostion namespace
using namespace Ncomposition;
int main(void){
  person p1;
  cout<<"---------------------------output------------------------"<<endl;
  p1.print_per_info();

  return 0;
}//end of main
