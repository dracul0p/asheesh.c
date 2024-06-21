// write 2 function one to print "hello" and second to print"good bye".
#include<stdio.h>
void hello();
void good_by();

int main(){
    hello();
    good_by();
    return 0;
}
void hello(){
    printf("HELLO!\n");
}
void good_by(){
    printf("GOOD_BY:) \n");
}
