#include<stdio.h>
#include<string.h>
 struct car{
        int engine;
        int fuel;
        float mileage;
    };
int main(){
    struct car c[2];
    int i;
    for(i=0;i<2;i++){
        printf("enter car %d enigne",i+1);
        scanf("%d",&c[i].engine);
        printf("enter car %d fuel",i+1);
        scanf("%d",&c[i].fuel);
        printf("enter car %d mileage",i+1);
        scanf("%f",&c[i].mileage);
    }
    printf("\n");
    for(i=0;i<2;i++){
        printf(" \n car %d details",i+1);
        printf(" \n engine of car %d",c[i].engine);
        printf("\n fuel of car %d",c[i].fuel);
        printf("\n mileage of car %f",c[i].mileage);
    }

}