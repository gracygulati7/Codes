#include<stdio.h>
int main(){
    int n,counteven=0,countodd=0,sumeven=0,sumodd=0,rem=0;
    scanf("%d",&n);
    condition:
    if (n!=0){
        rem=n%10;
        if (rem%2==0){
            sumeven+=rem;
            counteven++;
        }
        else{
            sumodd+=rem;
            countodd++;
        }
    n=n/10;
    goto condition;
    }
    else{
        if(counteven>countodd){
            printf("%d",sumeven);
            }
        else{
            printf("%d",sumodd);
            }
    }
}