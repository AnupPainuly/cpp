//compostion namespace
#include<iostream>
using namespace std;
namespace Ncomposition{
  class date{
    private:
      int dd,mm,yy;
    public:
      date(){               //constructor which takes user input
        cout<<"Enter the date,month,year"<<endl;
        cin>>this->dd;
        cin>>this->mm;
        cin>>this->yy;
      }
      void display(){
        cout<<this->dd<<"-"<<this->mm<<"-"<<this->yy<<endl;
      }
      ~date(){ //destructor
        this->dd=0;
        this->mm=0;
        this->yy=0;
      }
  };//end of class date.
}//end of namespace.
using namespace Ncomposition;
int main(void){
  date d1;
  d1.display();
  cout<<"Size of object d1: "<<sizeof(d1)<<endl;  //size of an object with class date
  return 0;
}
