#include<stdio.h>
int main(){
    int n,table;
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
        table=i*n;
        printf("%d\n",table);
    }
}