// Q. swap 2 numbers a & b ?
#include<stdio.h>
void swap(int a , int b );
void _swap(int *a , int *b );
int main(){
    int x=2;
    int y=3;
    swap(x,y);               // call by value
    printf("a =%d & b = %d \n",x ,y);

    _swap(&x ,&y);            // call by refrence
    printf("a =%d & b = %d \n",x ,y);
    return 0;

}
void _swap(int *a , int *b ){
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("a = %d & b= %d \n", *a , *b );

}

 void swap(int a, int b ){
    int t;
    t = a;
    a = b;
    b = t;
    printf("a = %d & b= %d \n", a , b );

}