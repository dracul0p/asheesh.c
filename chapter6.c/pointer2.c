// declaring pointer :

/*  int *ptr =22;
    float *ptr =3.0;
    char *ptr ='c';   */

// foramt specifier: int *ptr;  %d: cant use because ptr is address ,%p:use for pointer adress (hexadecimal),%u: unsigned int .
// address
/* pritnf("%p",&age);
   pritnf("%p",ptr);
   pritnf("%p",&ptr);   */

#include<stdio.h>
int main(){
    int age =22;
    int *ptr =&age;
    
    // address
    printf("%p \n",&age);
    printf("%u \n",&age);

    printf("%p \n",ptr);
    printf("%d \n",ptr);
    printf("%u \n",ptr);

    printf("%p \n",&ptr);
    printf("%u \n",&ptr);

}
