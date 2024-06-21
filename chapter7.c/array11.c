// Q. write a fn to count the no. of odd no. in an array.
#include<stdio.h>
int count_no(int arr[] , int n);
int main(){
    int arr[] ={1,2,3,4,5,6};
    printf("%d",count_no(arr ,6 ));
    return 0;
}
int count_no(int arr[] , int n){
    int count = 0;
    for(int i=0 ;i<n; i++) {
        if(arr[i] %2 != 0){
            count++;
        }
    }
    return count;
}


