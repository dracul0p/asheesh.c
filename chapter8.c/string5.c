// string using pointer 
// char *str="hello world";
// stores string in memory & the assigned address is stored in the char pointer'str'
/*

char *str ="hello world" // can be reinitialized
str ='world';
str ='goku'
char str[] ="hello world" // can not be reinitialized
  */
 #include<stdio.h>
 int main(){
    char *canChange ="Hello world";
    puts(canChange);
    canChange ="hello";
    puts(canChange);

    char cantChange[]="hello tehdkja";
    puts(cantChange);
    // CantChange ="helooo";   // will not change for an arr string.
   return 0;
}