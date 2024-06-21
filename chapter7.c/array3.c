// Q. WRITE A PROGRAM TO ENTER PRICE OF 3 ITEM & PRINT THEIR FINAL COST WITH GST.
#include<stdio.h>
int main(){
    float price[3];
    printf("enter item prices:");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    printf("final price: %f \n", price[0] + (0.18 * price[0]));
    printf("final price: %f \n", price[1] + (0.18 * price[1]));
    printf("final price: %f \n", price[2] + (0.18 * price[2]));
    return 0;

}