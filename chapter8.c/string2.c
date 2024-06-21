// Q.create a string firstName & lastName to store details of user & print all the character using a loop.
#include<stdio.h>
void printString(char arr[]); // string dosent req size it  ends at null character.
int main(){
    char firstName[] = "asheesh";
    char lastName[] = "rawat";
     printString(firstName);
     printString(lastName);
    
    
    return 0;
}
void printString(char arr[]){
    for(int i=0; arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}

