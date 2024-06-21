// Q . factorial of n
#include<stdio.h>
int factorial(int n);
int main(){
    printf("factoraial of no: %d",factorial(1));

}
int factorial(int n){
    if(n == 0  ){     // 0 is base case as factorial of 0!= 1 other wise n == 1 as 1!=1
        return 1;
    }
    int factorialNm1 = factorial(n-1);
    int factorialN = factorialNm1 * n;
    return factorialN;

}