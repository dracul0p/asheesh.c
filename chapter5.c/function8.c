// use library fn to calculate square of a no ?   
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter a no :");
    scanf("%d",&n);
    printf("sq of no  is :%f",pow(n,2)); //pow is of double data type.implicit conversion inside pow .but will not cover its double to int
    return 0;

}
