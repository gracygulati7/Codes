#include<stdio.h>
int main(){
    int n,temp,r,sum=0;
    scanf("%d",&n);
    for(temp=n;n!=0;n/=10){
        r=n%10;
        sum=sum+(r*r*r);
    }
    if(sum==temp){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}