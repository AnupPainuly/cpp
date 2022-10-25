//Dynamic memory allocation in Cpp using new operator.
#include<iostream>
using namespace std;
int main(void){
  int i,no,*ptr=NULL;
  ptr=new int[no]; //this could be written in C as ptr=(int*)malloc(no*sizeof(int))
  cout<<"Enter the no of elements for an array"<<endl;
  cin>>no;
  //accepting the array elements
  cout<<"Accepting Array Elements"<<endl;
  for(i=0;i<no;i++){
    cin>>ptr[i];
  }//end of for
  //displaying the array elements
  cout<<"Displaying Array Elements"<<endl;
  for(i=0;i<no;i++){
    cout<<ptr[i]<<" ";
  }
  delete [] ptr; //to free the memory occupied by array in heap
  ptr=NULL;

  return 0;
}
