// Q. will  adress output be same ? no
#include<stdio.h>
void printAddress(int n);
void _printAddress(int *n);
int main(){
    int n = 4;

    
    printAddress(n); //call by value
    printf(" %u \n", &n);
    _printAddress(&n); ///call by refrence
    printf(" %u \n", &n);
    return 0;
}
void printAddress(int n){
    printf(" %u \n", &n);
}
void _printAddress(int *n){
    printf(" %u \n", n);
}
