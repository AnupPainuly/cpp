//Structure in Cpp without this pointer
#include<iostream>
#include<iomanip>
//#pragma pack(1)//preprocessor directive is used to remove the slack bytes from sturcture but 
               //it hasno affect on the size of a class
using namespace std;
class book{
  private:
    int bookid;
    int pages;
    double price;
  public:
    void accept_info(){
      cout<<"Enter the book informations"<<endl;
      cout<<"What is the bookid"<<endl;
      cin>>bookid;
      cout<<"How many pages does the book have?"<<endl;
      cin>>pages;
      cout<<"what is the cost of the book?"<<endl;
      cin>>price;
    }
    void display_info(){
      cout<<"Book ID:"<<bookid<<endl;
      cout<<"Number of pages:"<<pages<<endl;
      cout<<setprecision(4); ///setprecision function comes from inp/outp mainpulation header file <iomanip>
      cout<<"Book Price:"<<price<<endl;
    }

};
int main(void){
  book book_one;
  cout<<"Size of Class book"<<sizeof(class book)<<endl;
  cout<<"Size of object in class book"<<sizeof(book_one)<<endl;
  book_one.accept_info();
  book_one.display_info();
  return 0;
}
