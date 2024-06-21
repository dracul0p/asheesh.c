// pointer arithmetic: pointer can be incremented & decremented.

// case 1:
/*  int age =22;
   int *ptr =&age;
    ptr++;   // ptr =ptr+1 ; i.e memory location change by 4 bites inside pointer i.e &age adress change.

 */
#include<stdio.h>
int main(){
    // int age =22;
    // int *ptr =&age;
    // printf("%u \n",ptr);
    // ptr++;
    // printf("%u \n",ptr);
    // ptr--;
    // printf("%u",ptr);

    //  float price =22.00;
    //  float *ptr =&price;
    //  printf("%u \n",ptr);
    //  ptr++;
    //  printf("%u \n",ptr);
    //  ptr--;
    //  printf("%u \n",ptr);

    // char star ='h';
    // char *ptr = &star;
    // printf("%u \n",&ptr);
    // ptr++;
    // printf("%u \n",&ptr);
    // ptr--;
    // printf("%u \n",&ptr);
    // return 0;

    //1. we can subtract one pointer from another. // of same data type
    /*   int ptr1 =&age;
         int ptr2 =&age2;
        sub = ptr2- ptr1;    // it will show diff in integer not in byte */

    //2.  we can also compare 2 pointers only  of same data type
    int age =22;
    int _age = 23;
    int *ptr1 =&age;
    int *ptr2 =&_age;
    printf("%u %u,difference =%u \n",ptr1 , ptr2, ptr1-ptr2);
    ptr2=&age;
    printf("compare =%u \n", ptr1 == ptr2);
    return 0;
}