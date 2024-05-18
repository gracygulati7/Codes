#include<stdio.h>
int main(){
    int n,a=0,b=1,c,i=3;
    printf("enter the number of digits you want in fibonacci series ");
    scanf("%d",&n);
    printf("\n%d\n%d \n",a,b);
    while(i<=n){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        i++;
    }
return 0;
}