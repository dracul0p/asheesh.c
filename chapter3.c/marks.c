#include<stdio.h>
int main(){
    int marks;
    printf("enter marks(0-100) :\n");
    scanf("%d",&marks);
    marks<30 ? printf("fail") : printf("pass");
    return 0;

    

    // if(marks<30){
    //     printf("student fail");

    // } 
    // else if(marks>30 && marks<=100){
    //     printf("pass");
    // }
    // else{
    //     printf("wrong marks");
    // }
   

}