#include<iostream>
#pragma pack(1) //pragma preprocessor directive is needed to get rid of slack bytes in struct for cpp also.
using namespace std;
struct book{
  private:
    char book_name[10];
    int pages;
    float price;
  public:
    void accept_info(){
      cout<<"Enter the book information"<<endl;
      cout<<"what is the name of the book:"<<endl;
      cin>>book_name;
      cout<<"how many pages does the book have:"<<endl;
      cin>>pages;
      cout<<"what is the cost of the book:"<<endl;
      cin>>price;
      return;
    }
    void display_info(){
      cout<<"The size of struct in cpp"<<sizeof(struct book)<<endl;
      cout<<"The book name:"<<book_name<<endl;
      cout<<"It has pages:"<<pages<<endl;
      cout<<"The cost of the book is:"<<price<<endl;
      return;
    }
    
  }; //end of stuct book
int main(void){
  book book_one;
  book_one.accept_info();
  book_one.display_info();
  return 0;
}
