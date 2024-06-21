// recursio: fn recall itself.
// any work done by loop can be done by recursion
// Q. pritn hellow world 5 times
#include<stdio.h>
void printHW(int count);
int main(){
    printHW(5);
    return 0;

}
// recursive fn  e.g

void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hell0 World ! \n ");
    printHW(count-1);
}

