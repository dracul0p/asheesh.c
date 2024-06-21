// Q. fn to calculate percentage of student from marks in science, math & sanskrit
#include<stdio.h>
int calPercentage(int science, int maths ,int sanskrit);
int main(){
    int sc = 90;
    int m = 90;
    int san= 90;
    printf("percentage is:%d",calPercentage(sc , m ,  san));
}
int calPercentage(int science, int maths ,int sanskrit){
    int sum= science + maths + sanskrit;
    int percentage = sum / 3 ;
    return percentage;
}