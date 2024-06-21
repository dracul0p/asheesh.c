// print the value of 'i' from its pointer to pointer 
#include<stdio.h>
int main(){
    int i=5;
    int *ptr =&i;  //not given
    int **pptr =&ptr;
    // *ptr ->5 
    // *pptr -> ptr
    // **pptr ->5
    printf("%d",**pptr);
}