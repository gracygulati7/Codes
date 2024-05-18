#include<stdio.h>
int main(){
    int a,b,c,min;
    scanf("%d %d %d",&a,&b,&c);
    min=((a<b)?((a<c)?a:b):((b<c)?b:c));
    printf("%d",min);
    return 0;
}
