#include<stdio.h>
int main(){
    int x =2;
    // if x=0 else  statment will work
    if(x=4){    // x is = 1 due to assignment operator = ,in C true = 1,2,3 ,4..
        printf("x is equal 1 \n");
        printf("%d \n",x);
    }
    else{
        printf(" x is not equal to 1");
    }
    return 0;
}
