//Class in Cpp using this pointer
#include<iostream>
#include<iomanip>
using namespace std;
class book{
  private:
    int book_id;
    int pages;
    double price;
  public:
    void accept_info(){
      cout<<"Enter the book information."<<endl;
      cout<<"What is the book ID:"<<endl;
      cin>>this->book_id;
      cout<<"how many pages does the book have?:"<<endl;
      cin>>this->pages;
      cout<<"what does the book cost?"<<endl;
      cin>>this->price;

    }
    void display_info(){
      cout<<"The BookID:"<<this->book_id<<endl;
      cout<<"The book has"<<this->pages<<" pages"<<endl;
      cout<<"it costs "<<this->price<<" rs"<<endl;

    }
    void set_price(){
      cout<<"Enter the new price for the book"<<endl;
      cin>>this->price;
    }
};
int main(void){
  double p; //variable for price
  book b1,b2;
  b1.accept_info();
  b1.display_info();
  b1.set_price();
  return 0;
}
