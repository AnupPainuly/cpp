//Static member function in Cpp
#include<iostream>
using namespace std;
class math_operations{
  public:
    static int sum(int n1, int n2){ //static member function
      return n2+n1;
    }
    int multiply(int n1, int n2){ //non static member function
      return n1*n2;
    }
};
int main(void){
  int ans;
  math_operations m1;
  ans=m1.multiply(10,20);
  cout<<"Multiplication by calling non static member function on object:"<<ans<<endl;
  
  ans=math_operations::sum(10,20);
  cout<<"addition by calling static member fucntion on class:"<<ans<<endl;

  math_operations m2;
  ans=m2.sum(10,20);
  cout<<"addition by calling static member function on object:"<<ans<<endl;

  return 0;
}

/*static member function are designed to be called on the class but they can be called on object as well.
 * non static member function can be called on object but they CANNOT be called on class name
 */
