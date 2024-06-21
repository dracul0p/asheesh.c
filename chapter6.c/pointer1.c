// pointer: a variable that stores the memory adress of another variable
/*syntax
  int age =22;
  int *ptr =&age;   // * : value at adress operator , &: adress of operator
  int _age =*ptr;      */      // here *ptr = value at address ptr i.e 22

#include<stdio.h>
int main(){
    int  age =22;
    int *ptr =&age;
    int _age =*ptr;
    printf("%d \n",_age );
    printf("%d",*ptr);
}