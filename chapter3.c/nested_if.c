#include<stdio.h>
int main(){
    int num;
    printf("enter num: \n");
    scanf("%d",&num);

    if(num>0){
        printf("positive \n");
        if(num % 2 == 0){
            printf("number is even");
        }
        else{
            printf("odd \n");
        }
        }

    else{
        printf("negative \n");
    }

}