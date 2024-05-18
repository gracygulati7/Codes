#include<stdio.h>
int main(){
    int arr[3];
    printf("enter the values of array");
    for (int i=0;i<3;i++){
        scanf("%d",&arr[i]);
        printf("%d\n",arr[i]);
    }
    int *p=arr;
    p=p+1;
    printf("%d\n",*p);
    printf("%d\n",p);
}
