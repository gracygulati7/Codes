#include<stdio.h>
int main(){
    char name[80];
    printf("enter string:");
    gets(name);
    printf("%s",name);
    strlen(name);
    printf("\nlength of string %d",strlen(name));
    return 0;
}