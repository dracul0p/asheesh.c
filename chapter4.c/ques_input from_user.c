#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter no: ");
        scanf("%d ",&n);
        printf("%d \n",n);
        if(n % 2 != 0){  
           break;
        }
    } while(1);
    printf("thank you");
    return 0;

    
}