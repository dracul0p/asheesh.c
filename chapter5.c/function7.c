// changes done is parameter(formal parameter) are not reflected in argument(actual parameter)
#include<stdio.h>
void calculatePrice(float value);
int main(){
    float value = 100.0;
    calculatePrice(value);
    printf("the value is: %f \n",value);
    return 0;
}
void calculatePrice(float value){
    value = value + (0.18 * value);
    printf("final value: %f",value);
}