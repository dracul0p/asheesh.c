#include<stdio.h>
int main(){
    char  ch;
    printf("enter a character :");
    scanf("%c",&ch);
    if(ch >= '0' && ch <='9'){
        printf("  character is digit:%c",ch);

    }
    else{
        printf(" character not a digit");
    }
   
    return 0;
}