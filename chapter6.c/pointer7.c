// pointer in fn call  : vvvv imp
// 1. call by value : we pass value as argument.
// 2. call by reffrence: we pass address of variable as argument
#include<stdio.h>
void square(int n);
void _square(int *n);
int main(){
    int number =4;
    square(number);   //call by value
    printf("number = %d \n",number);

    _square(&number);  // n = stores address  number  // call by refrence
    printf("number = %d \n",number);
    return 0;

}
void _square(int *n){
    *n= (*n) * (*n); //4 * 4
    printf("square= %d \n",*n);

}
void square(int n){ 
    n =n * n;
    printf("square =%d \n",n);
}