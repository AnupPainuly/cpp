//Friend function in Cpp
#include<iostream>
using namespace std;
class friend_demo{
  private:
    int a;
    int b;
  public:
    friend_demo(){  //parameter less constructor
      this->a=10; 
      this->b=20;
    }
    friend_demo(int a, int b){ //two parameter constructor
      this->a=a;
      this->b=b;
    }
    ~friend_demo(){ //destructor 
      this->a=0;
      this->b=0;
    }
    friend void sum(); //friend function allows us to acces the data member of private nature outside the class.
};
void sum()
{
  friend_demo obj;
  int ans=obj.a+obj.b;
  cout<<"Ans-"<<ans<<endl;
  return;
}
int main(void){
  sum();
  return 0;
}
