#include<stdio.h>
#pragma pack(1) //removes the slack byte from a structure.
struct book{
  char book_name[10];
  int pages;
  float price;
};
int main(void){
 struct book book_one;
 struct book *ptr_book_one=&book_one; //a pointer is necessary to use arrow operator
 printf("\nThe size of the variable 'book_one' :%ld",sizeof(book_one));
 printf("\nThe size of user defined data type struct: %ld",sizeof(struct book));
 
 //getting input for book information from the user
 printf("\nGetting the book information");
 printf("\nEnter the book name");
 scanf("%[^\n]",book_one.book_name);
 printf("\nEnter the no of pages");
 scanf("%d",&book_one.pages);
 printf("\nWhat is the cost of the book?:");
 scanf("%f",&book_one.price);

 //accessing the data memembers of struct with dot operator and variable of struct book
 printf("\nBook name: %s",book_one.book_name);
 printf("\nThere are %d pages in the book %s",book_one.pages,book_one.book_name);
 printf("\n%s costs %.2f",book_one.book_name,book_one.price);
 //accessing the data members of struct with arrow operator and variable of the struct book
 printf("\n---------------------------------x-----------------x----------------x------------");
 printf("\nBook name: %s",ptr_book_one->book_name);
 printf("\nThere are %d pages in the book %s",ptr_book_one->pages,ptr_book_one->book_name);
 printf("\n%s costs %.2f",ptr_book_one->book_name,ptr_book_one->price);
 //accessing the data members of struct with * operator and variable of the struct book
 printf("\n---------------------------------x-----------------x----------------x------------");
 printf("\nBook name: %s",(*ptr_book_one).book_name);
 printf("\nThere are %d pages in the book %s",(*ptr_book_one).pages,(*ptr_book_one).book_name);
 printf("\n%s costs %.2f",(*ptr_book_one).book_name,(*ptr_book_one).price);

 return 0;

}
