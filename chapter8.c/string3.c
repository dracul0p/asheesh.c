// string format  specifier: %s
/* char string[]="asheesh";
   printf("%s",string);                  */

#include<stdio.h>
int main(){
    char name[]="asheesh";
    char hero[20];
    printf("name is: %s \n",name);
    printf("enter hero:");
    scanf("%s",hero);  // &  not used  because string is an arr ,arr is pointer.
    return 0;

}