// Q. FN TO PRINT ARRAY IN REVERSE
#include<stdio.h>
// arr when passed inside fn it is always call by refrence.
void reverse(int arr[],int n);
void printArr(int arr[],int n);
int main(){
    int arr[] ={1,2,3,4,5};
    reverse(arr , 5  );
    printArr(arr , 5);// call  by refrence
    
    return 0;
}

void printArr(int arr[] , int n){
    for(int i=0; i<n ;i++){
        printf("%d \t",arr[i]);

    }
}

void reverse(int arr[],int n){
    for(int i=0 ;i<n/2; i++){
        int first_val =arr[i];
        int sec_val =arr[n-i-1];
        arr[i] = sec_val;
        arr[n-i-1] = first_val;
    }
}
