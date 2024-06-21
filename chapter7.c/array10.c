// q. 2 students 3 subject marks store
#include<stdio.h>
int main(){
    // 2 * 3
    int marks[2][3];  // _ _ _ | _ _ _
    marks[0][0] =90;
    marks[0][1] =80;
    marks[0][2] =70;

    marks[1][1] =90;
    marks[1][2] =40;
    marks[1][3] =20;
    printf(" marks: %d \t",marks[0][1]);
    printf(" marks: %d \t",marks[1][1]);
}