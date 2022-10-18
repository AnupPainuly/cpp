//Passing struct to functions in C programming
#include<stdio.h>
#pragma pack(1)
struct book{
  char bookname[10];
  int pages;
  float price;
};
void accept_book_info(struct book *b)
{
  printf("\nEnter the book info:"); //acceptinf the book info using pointer and dot operator.
  printf("\nBook name");
  scanf("%[^\n]",(*b).bookname);
  printf("\nNumber of pages in the book:");
  scanf("%d",&(*b).pages);
  printf("\nEnter the price of the book");
  scanf("%f",&(*b).price);
}
void display_book_info(struct book *b)
{

  printf("\nDisplaying the book info using pointer and arrow operator");
  printf("\nThe book name is %s",b->bookname);
  printf("\nIt has %d pages",b->pages);
  printf("\nand it will cost you %.2f",b->price);
}
int main(void)
{
  struct book book_one;
  accept_book_info(&book_one);
  display_book_info(&book_one);

}
