#include<stdio.h>
int main(){
    float length,bredth ;
    printf("enter length:\n");
    scanf("%f",&length);

    printf("enter bredth:\n");
    scanf("%f",&bredth);

    printf("perimeter of rectangle:%f", 2 * (length+bredth));
    

    return 0;
}