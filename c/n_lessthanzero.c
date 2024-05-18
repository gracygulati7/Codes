#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    switch(n>0){
        case 1:printf("invalid");
        break;
    
       case 0:
        switch(n<=0){
        case 0: printf("valid");
        break;
        case 1:printf("valid");
        break;
    }
    }
    return 0;
}