 #include<stdio.h>
int main(){
    int n,r,x,sum;
    sum=0;
    printf("enter n:\n");
    scanf("%d",&n);
    x=n;
    while(n>0){
        r=n%10;
        
        sum=sum+(r*r*r);
        n=n/10;
    }
    
    if(x==sum){ 
        printf("  armstrong \n");
    }
    else{
        printf(" not armstrong");
    }
    return 0;
}