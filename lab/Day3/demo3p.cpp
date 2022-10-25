//size of a reference in Cpp
#include<iostream>
using namespace std;
class demo{
  private:
    int &r2;
    char &r1;
};
int main(void){
  cout<<"Size of class having references: "<<sizeof(demo)<<endl;
}
