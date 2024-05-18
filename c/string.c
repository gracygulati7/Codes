#include<Stdio.h>
#include<String.h>
int main(){
    char a[10]="abc",b[10]="pqr";
    strcpy(a,b);
    printf("%s",a);
}