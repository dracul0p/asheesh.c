// q. find output ?
#include<stdio.h>
int main(){
    int *ptr;
    int x;
    ptr =&x;
    *ptr =0;  // x=0 

    printf(" x= %d \n",x);
    printf("*ptr = %d \n",*ptr);

    *ptr +=5; //*ptr =*ptr+x   i.e  x= x+s
    printf(" x= %d \n",x);
    printf("*ptr = %d \n",*ptr);

    (*ptr)++;  // *ptr =*ptr +1 i.e x=x+1 
    printf(" x= %d \n",x);
    printf("*ptr = %d \n",*ptr);
    
}