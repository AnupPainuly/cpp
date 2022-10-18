#include<stdio.h>
#pragma pack(1)// This macro removes the slack bytes from the structure. without this macro the sizeof struct book would be 20 bytes.
struct book{
  int pages;
  char name[10];
  float price;
};
int main(void)
{
  struct book book_one;// book_one is a varible/object of userdefined datatype struct book.
  struct book *ptr=&book_one;//decalaring and intializing a pointer varible of type struct book pointing to book_one.
  printf("\nThe size of variable book_one is %ld",sizeof(book_one)); //%ld is long int gives error for %d
  printf("\nThe size of variable book_one is %ld",sizeof(struct book));
  
  printf("\nEnter the book Information");
  printf("\nEnter the book name:");
  scanf("%[^\n]",book_one.name);//%[^\n] scans upto the occurrence of newline character like gets would do.
  printf("\nEnter the number of pages in the book:");
  scanf("%d",&book_one.pages);
  printf("\nEnter the price of the book:");
  scanf("%f",&book_one.price);
  
  printf("\nPrinting the elements of struct using variable and dot operator");
  printf("\nBook name:%s",book_one.name);
  printf("\nBook has %d pages.",book_one.pages);
  printf("\nThe price of the book is %.2f",book_one.price);
  
  printf("\nPrinting the elements of struct using pointer and arrow operator");
  printf("\nBook name is:%s",ptr->name);
  printf("\nThe number of pages in the book:%d",ptr->pages);
  printf("\nThe price of the book:%.2f",ptr->price);

  printf("\nPrinting the elements of struct using pointer dereferencing and dot operator.");
  printf("\nBook name:%s",(*ptr).name);
  printf("\nThe number of pages in the book:%d",(*ptr).pages);
  printf("\nThe price of the book:%.2f",(*ptr).price);
  return 0;
}
