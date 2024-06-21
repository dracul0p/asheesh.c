// write fn to calculate area of sq ,circle, rectangle
#include<stdio.h>
float sq_area(float n);
float rec_area(float a, float b);
float circle_area(float r);
int main(){
    float r = 3.0;
    printf("circle area: %f \n",circle_area(r));

    float n =4.0;
    float z = sq_area(n);
    printf("sqaure area :%f \n",z);

    float a=5.0;
    float b=10.0;
    printf("rectngle area: %f \n",rec_area(a,b));

    
    return 0;
}
float sq_area(float n ){
    return n*n;
}
float rec_area(float l, float b){
    return l*b;
}
float circle_area(float r){
    return 3.14 * r * r ;
}