#include<stdio.h>
// = assigment
// operator precidence  * / %  ,    + -   ,   =
int main(){
    int a= 4+9*40;
    printf("output is : %d \n", a);

    // associativity rule for sam precedence * /  %
    // left to right
    int x= 4*3/6*2; 
    printf("output is :%d",x);
    return 0 ;

                           
}