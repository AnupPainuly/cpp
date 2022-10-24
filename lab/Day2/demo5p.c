//Demonstration of how we can change the value of const variable using pointer in c.
//compiler screams a warning but hey it lets you do it.
#include<stdio.h>
int main(void){
  const float pi=3.14f; //decalaration of const variable pi.
  float *ptr=&pi; //decalaration of pointer to const variable pi.
  printf("pi=%.2f,*ptr=%.2f\n",pi,*ptr);
  *ptr=4.14f;
  printf("pi=%.2f,*ptr=%.2f\n",pi,*ptr);
  return 0;
}
