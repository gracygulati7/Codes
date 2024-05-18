#include<stdio.h>
int main(){
    int n,y;
    scanf("%d",&n);
    scanf("%d",y);
    switch (n){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        if ((y%4==0)&&((y%100==0)&&(y%400==0))){
            printf("it is a 31 days month and is a leap year",y);
        }
        else{
            printf("it is a 31 days month and is not a leap year",y);
        }
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        if ((y%4==0)&&((y%100==0)&&(y%400==0))){
            printf("it is a 30 days month and is a leap year",y);
        }
        else{
            printf("it is a 30 days month and is not a leap year",y);
        }
        break;
        case 2:
        if ((y%4==0)&&((y%100==0)&&(y%400==0))){
            printf("it is feb month and is a leap year",y);
        }
        else{
            printf("it is a feb month and is not a leap year",y);
        }
        break;
        default: printf("invalid month");
    }
    
}