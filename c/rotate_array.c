#include<stdio.h>
int main(){
    int n,k;
    printf("enter the no. of elements in array");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d\n",arr[i]);
    }
    printf("enter the times to rotate");
    scanf("%d",&k);
    int t=arr[n-1];
    for (int j=0;j<k;j++){
    for (int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    }
    arr[0]=t;
    for(int i = 0; i<n; i++){    
        printf("%d ", arr[i]);    
    }
}    