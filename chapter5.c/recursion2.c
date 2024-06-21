// resursion in math  e.g f(x)=x^2; x=2 find f(f(f(f(x))))
/*  fn call type:
   1. noraml fn call: 
    2. recursion fn call  */

//  Q. sum of 1st n natural no ?
#include<stdio.h>
int sum(int n);

int main(){
    printf("sum is: %d",sum(5));
    return 0;

}
int sum(int n){
    if(n == 1){
        return 1;    // base case
    }
    int sumNm1 =  sum(n-1) ;    // sum of n-1  terms
    int sumN =  sumNm1 + n ;    // total sum  /  sum of 1 to n 
    return sumN;
}