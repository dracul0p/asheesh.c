// Q. convert celsius to fahrenhite ?
#include<stdio.h>
float convertTemp(float celsius);
int main(){
    printf("value in faranehite is:%f", convertTemp(32));
    return 0;
}
float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}

