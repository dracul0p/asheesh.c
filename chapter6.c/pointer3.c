// format specifier: print value of address at pointer 
/* printf("%d",age);
   printf("%d",*ptr);
   printf("%d",*(&age));   */

#include<stdio.h>
int main(){
    int age= 22;
    int *ptr = &age;
    // value
    printf("%d \n",age);
    printf("%d \n",*ptr);
    printf("%d \n",*(&age));
    printf("%d \n",ptr);
    printf("%d \n",&age);

}
