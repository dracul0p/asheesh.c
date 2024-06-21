// write a program to check given no is a natural no ?
#include<stdio.h>
int main(){
    int n;
    printf("enter no: ");
    scanf("%d",&n);
    if (n>0){
        printf("no is natural_no");

    }
    else if(n == 0){
        printf("no is whole_no but not natural");
    }
    else{
        printf("it is not natural no is  negative no");
    }
    
    
}