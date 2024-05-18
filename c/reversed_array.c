#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of elements in array");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d\n",arr[i]);
    }
    for (int i=n-1;i>=0;i--){
        printf("\n%d",arr[i]);
    }
}