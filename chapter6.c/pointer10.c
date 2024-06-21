// Q.  write a fn to calculate the sum,product & average of 2 numbers.print that average in the main fn.
// Hint: a fn has 1 return value to return more than 1 value use pointers.
#include<stdio.h>

void calc(int a ,int b,int *sum , int *prod, int *avg);
int main(){
    int a = 3 ,b =5;
    int sum , prod , avg ;
    calc(a, b, &sum, &prod, &avg);
    printf("sum:%d & product:%d & avg: %d",sum,prod,avg);
    return 0;
}
void calc(int a ,int b,int *sum , int *prod, int *avg){
    *sum = a+b;
    *prod =a*b;
    *avg =(a+b)/2;
    printf("sum:%d & product:%d & avg: %d \n", *sum, *prod, *avg);

}
    



