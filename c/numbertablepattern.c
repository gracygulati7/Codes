#include<stdio.h>
int main(){
    int i,j,k,table,rows=6;
    scanf("%d",&k);
    for (i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            for (int n=1;n<=10;n++){
        table=n*k;
        printf("%d\n",table);
}
        }
    }
}