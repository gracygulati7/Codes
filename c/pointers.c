#include<stdio.h>
int main(){
    int a=5;
    int *p=&a;
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",*p);           //*p=derefence
    printf("%d\n",&p);
    int **y=&p;
    printf("%d\n",y);
    printf("%d\n",*y);
    printf("%d\n",**y);
}
