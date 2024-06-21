// all no input form us not divisible by 7 ?
#include<stdio.h>
int main(){
    int n;
    do{   
       printf("enter no: ");
       scanf("%d",&n);
       printf("%d \n",n);
       if(n % 7 ==0) {
        break;
        // break also exits from nested loop
       }
    } while(1);
    printf("thank you \n");
    return 0;

}