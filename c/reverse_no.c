#include<stdio.h>
int main(){
    int n,count=0,i=1,rem,rev;
    printf("enter a number \n");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        count++;
    }
    printf("The number of digits : %d",count);
    printf("\nreverse of the number is : %d",rev);
    
}