#include<stdio.h>
int main(){
    int marks;
    printf("enter marks");
    scanf("%d",&marks);

    if(marks<=30){
        printf("the grade is C");
    }
    else if(marks>30 && marks<70){  
        printf("the grade is B");
    }
    else if(marks>=70 && marks<90){
        printf("the grade  is A ");

    }
    else{
        printf("the grade is A+");
    }
} 