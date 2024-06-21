// condition statment

//1. if-else

// if(condition){
//     do something if TRUE

// }
// else if{

// }
// else if{

// }
// else if{

// }
// else{
//     do something if false
// } 
#include<stdio.h>
int main(){
    int age;
    printf("enter age: ");
    scanf("%d",&age);
     if(age>18){
        // BOLCK COMBINATION OF STATMENT
        printf("adult \n");
        printf("they can vote \n");
        printf("they can drive \n");
    }
    else if(age>13 && age<18){
        printf("teenager");

    }
    else{
        printf("not adult \n");
       
    }
    printf("thank you"); 

    return 0;



}
