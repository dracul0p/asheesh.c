#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter three no:");
    scanf("%d %d %d",&n1, &n2,&n3);
    if(n1<n2 && n1<n3){
        printf("n1 is smallest");
    }
    else if(n2<n3){
        printf("n2 is smallest ");

    }
    else{
        printf("n3 is smallest ");
    }
}