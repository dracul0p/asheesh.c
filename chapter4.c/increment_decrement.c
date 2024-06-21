#include<stdio.h>
int main(){
    // increment operator
    // ++i : first increment then use(pre increment operator)
    // i++ : first use then increment(post increment operator)

    // decrement operator
    // --i pre decrement
    // i++ post decrement
    int i=1;
    printf("%d \n ",i++); 

    printf("%d \n ", i); 
    printf("%d \n ",++i); 
    printf("%d \n ",--i); 
    printf("%d \n ",i--); 
    return 0;
}