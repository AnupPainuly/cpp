//class in cpp is a user defined type or data structure and it equivalent to structure in C.
//structure is user defined data type in C which contains similar or disimilar elements in contigous location.
//C language is a subset of CPP which means c program can run in g++ but not the other way round.
#include<stdio.h>
#pragma pack(1)
struct book{
  private:              //Private is a access modifier which allows you to change the data memembers
                        //through only its memember functions.
    char bookname[10];
    int pages;
    float price;

  public:               //Public is a access modifier which allows which is accessible publicly.
    void accept_book_info() //we are not passing argument to the function like c because data memembers are accessible.
    {
      printf("\nEnter the book information:");
      printf("\nEnter the book name:");
      scanf("%[^\n]",bookname);// we can directly scan the bookname without using dot or arrow operator as opposed to C
      printf("\nThe book contains how many pages?:");
      scanf("%d",&pages);
      printf("\nWhat does the book cost?:");
      scanf("%f",&price);

    }
    void display_book_info()
    {
      printf("\nThe book name:%s",bookname);
      printf("\nIt has %d pages",pages);
      printf("\nThe books costs: %.2f",price);
    }
};
int main(void){
  book book_one;
  book_one.accept_book_info();// Cpp calls data first and then calls the memember function as opposed to C
  book_one.display_book_info();
  return 0;
}
