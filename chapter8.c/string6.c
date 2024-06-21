// Q.program that input users name & print its length.
#include<stdio.h>
int countlength(char arr[]);
int main(){
    char userName[30];
    printf("user name:");
    fgets(userName,30,stdin);
    printf("%d",countlength(userName));

    return 0;
}

int countlength(char arr[]){
    int count = 0;
    for(int i =0; arr[i]!='\0';i++){
        count++;
    }
    return count-1;

}