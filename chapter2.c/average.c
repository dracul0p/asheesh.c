#include<stdio.h>
int main(){
    int a ,b,c;
    float avg;
    printf("three no are:");
    scanf("%d %d %d",&a,&b,&c);
    // printf("enter no1:");
    // scanf("%d",&a);
    // printf("enter no2:");
    // scanf("%d",&b);
    // printf("enter no3:");
    // scanf("%d",&c);

    avg =(a+b+c)/3;

    printf("the average of three no is:%f 1\n",avg);
}