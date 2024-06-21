#include<stdio.h>
int main(){
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("upper case \n");
     }
    else if(ch >= 'a' && ch <= 'z'){
        printf("lower case");
    }
    else{
        printf("invalid character");
    }
    return 0;
}

    
   

   

   
   

