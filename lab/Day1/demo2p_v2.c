//passing struct as argument to accept display functions
#include<stdio.h>
#pragma pack(1)
struct book{
  char book_name[10];
  int pages;
  float price;
};
void accept_info(struct book *book_one){
 printf("\nEnter the book information as prompted");
 printf("\nWhat is the book name: ");
 scanf("%[^\n]",book_one->book_name);
 printf("\nhow many pages does the book have?:");
 scanf("%d",&book_one->pages);
 printf("\nwhat is the cost of the book?:");
 scanf("%f",&book_one->price);
}
void display_info( const struct book *book_one){
  printf("\nBook name:%s",book_one->book_name);
  printf("\nThe book has %d",book_one->pages);
  printf("\nThe book costs %.2f:",book_one->price);

}
int main(void){
  struct book book_one;
  struct book *ptr_book_one=&book_one;
  accept_info(&book_one);
  display_info(&book_one);
  return 0;
}
