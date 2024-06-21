// Q.Create a 2D array,storing the table of  2 & 3.
#include<stdio.h>
void storeTable(int arr[][10] , int n ,int m, int number);
int main() {
    int table[2][10];
    storeTable(table, 0, 10 ,2);
    storeTable(table, 1, 10 ,3);

    for(int i=0; i<10; i++){   
        printf("%d \t ",table[0][i]);
    }
        printf("\n");

   for(int i=0; i<10; i++){   
        printf("%d \t",table[1][i]);
    }
    printf("\n");
    
    return 0;
}
void storeTable(int arr[][10] , int n , int m ,int number){
    for(int i=0; i<m; i++){   // m --> 0  to  10
        arr[n][i] = number * (i+1);// 2, 4 , 6, 8, 10
//arr[0][0] arr[0][1] arr[0][2] arr[0][3].....
    }
}
