#include<stdio.h>
int main(){
 /*   // sum of n natural no 
    int n;
    printf("enter a no:");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1;i<=n;i++){   
      sum=sum+i; //sum+=i
    }
    printf(" sum is :%d \n",sum );  

// print no. in reverse
    for(int i=n; i>=1 ; i--){
       printf(" %d \n",i );  
    }                                             */

    int n;
    printf("enter  no:\n");
    scanf("%d",&n);
    int sum=0;
    // for(int i=1, j=n; i<=n && j>=1 ;i++ , j--) {
    //     sum = sum + i; 
    //     printf("%d \n",j);
    // }
    // printf("the sum is %d \n",sum);
    
    for(int j=n;j>1;j--){  
       sum =sum + j;
    }
    printf("the sum is:%d",sum);

    return 0;
}