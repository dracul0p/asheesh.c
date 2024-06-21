// Q. WRITE A PROGRAMM IN C TO PRINT LARGER NO OF 2 TO  USING POINTER 
#include<stdio.h>
int main(){
    int x, y;
    printf("enter two no:");
    scanf("%d%d",&x,&y);
    int *ptr1 =&x;
    int *ptr2 =&y;
    if(*ptr1 > *ptr2){
        printf("x greater");
    }else if(*ptr2>*ptr1){
        printf("y is greater");
    } else{
        printf("both equal");
      }
   return 0;

}