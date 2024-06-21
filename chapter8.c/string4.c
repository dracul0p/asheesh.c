// Q .ask user to enter firstName and print it back to them
#include<stdio.h>
int main(){
    // char firstName[10];
    // printf("enter your firstName:");
    // scanf("%s",firstName);
    // printf("your firstName is %s:firstName");
    
    // char fullName[100];
    // printf("enter your fullName:");
    // // scanf("%s",fullName);                    // scanf can't enter multi word string i.e string with spaces.
    // // gets(fullName);
    // printf("your fullName is %s:",fullName);

/* does not input  string value after space:use gets() , puts(),fgets()
    gets(str)  -->out dated & dangerous {input a string even multiword}
    puts(str)  --->{output string}
    fgets(str,n,file) -->     {stop when n-1 chars or new line is entered}
    */
    int str[100];
    gets(str); //input
    fgets(str , 100 ,stdin);// input
    puts(str); //output
    return 0;
}