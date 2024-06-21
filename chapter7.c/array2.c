#include<stdio.h>
int main(){
    int marks[3];
    printf("enter phy:");
    scanf("%d",&marks[0]);

    printf("enter chem:");
    scanf("%d",&marks[1]);

    printf("enter maths:");
    scanf("%d",&marks[2]);

    printf("maths: %d chem:%d phy:%d",marks[2] ,marks[1], marks[0]);
}