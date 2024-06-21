// pointer to pointer:
// variable that stores the memory adress of another pointer

/*     syntax:
    int **pptr;
    char **pptr;    //int **star;
    float **pptr;      */

#include<stdio.h>
int main(){
   float price =100.00;
   float *ptr =&price;
   float **pptr =&ptr;
   return 0;

}



/*  int age;
    int *ptr;      //pointer
    int **pptr  //pointer to pointer */

