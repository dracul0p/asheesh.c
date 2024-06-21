//  1. sum of two no using fn 
//  2. table of no using fn 

// important ques to understand return and calling

#include<stdio.h>
int sum(int a ,int b);
void table(int n); 
int main() {
    int a ,b;
    printf("enter two no a & b: \n");
    scanf("%d %d",&a ,&b);
    int s =sum(a,b); 
    printf("the sum is :%d \n",s);
    int n;
    printf("enter no:");
    scanf("%d",&n);
    table(n);           //argument  / actual parameter :it passes value to formal parameter
    return 0;
}
int sum(int x, int y) {
    return x+y;   //return value goes to calling fn
} 
void table(int n) {     // formal parameter
    for(int i=1; i<=10; i++){  
       printf("%d \n", n * i ); 
    }
}