#include<stdio.h>
int main(){
    int n,sum=0,div=1,mod,multi=1;
    printf("enter a 4 digit number");
    scanf("%d",&n);
    sum=n+8;
    div=sum/3;
    mod=div%5;
    multi=mod*5;
    printf("%d",multi);
}
