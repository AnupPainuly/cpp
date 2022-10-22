//Topic:Default argument
#include<iostream>
using namespace std;
int sum(int a=0,int b=0,int c=0,int d=0);//funciton decalaration // default argument is given right to left in consecutive order
int main(void){
  int a,b,c,d,ans;
  cout<<"Enter the numbers for adition"<<endl;
  cin>>a>>b>>c>>d;
  ans=sum(a,b);//since default argument value for d and c is zero and it is not passed here. The addition is done for a,b
  cout<<"The sum is a,b:"<<ans<<endl;
  ans=sum(a,b,c);//since default argument value for d is zero and it is not passed here. The addition is done for a,b,c
  cout<<"The sum is a,b,c:"<<ans<<endl;
  ans=sum(a,b,c,d);
  cout<<"The sum is of a,b,c,d:"<<ans<<endl;
  return 0;
}
int sum(int a,int b,int c,int d){
  return a+b+c+d;
}//end of function definiton of sum.

/*Note: The default arguments are passed in function decalaration when function is written as below.

int func();//func decalaration
int main(){

return 0;
} 
int func(){

}//end of func def

*/
