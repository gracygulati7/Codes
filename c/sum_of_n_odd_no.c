#include<stdio.h>
int main(){
    int i,n,sum=0;
    i=1;
    printf("enter the upper limit",n);
    scanf("%d",&n);
    while(i<=n){
        if(i%2!=0){
            sum=sum+i;
            i=i+2;
        }
    }
    printf("%d",sum);
    return 0;
}