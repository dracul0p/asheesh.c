 // Q. for given array what will the following give?
/*
int arr[]={1,2,3,4,5}  // arr[0],arr[1] ,arr[2] ,arr[3] ,arr[4]
a. *(arr + 2) = 3

b. *(arr + 5)= error not exist

*/
#include<stdio.h>
int main(){
    int arr[] = { 1, 2,  3, 4, 5};
    printf("%d \n", *(arr + 2));
    printf("%d", *(arr + 5)); //error
    return 0;
}