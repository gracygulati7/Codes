#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of elements in array");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            printf("%d",sum);
        }
    }
}