// loop counter it can be float or even character

#include<stdio.h>
int main(){
    // infinite loop
    // for(int i=1; ;i++){
    //    printf("hello world");
    // }
    
    // for(float i=1.0; i<=5.0; i++){
    // printf("%f \n", i);
    // }
    
    for(char ch='a'; ch<='z'; ch++){   
       printf("%c \n" , ch );
    }
    
    return 0;
}