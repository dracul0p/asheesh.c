#include<stdio.h>
void namaste();
void bonjour();
void main() {
    printf("enter f for french & i for indian:");
    char ch;
    scanf("%c",&ch);
    if(ch =='i') {
         namaste();
    } else{
        bonjour();
    }
     return 0;

}
void namaste() {
    printf("namaste \n");

}
void bonjour() {
    printf("bonjour \n");
}