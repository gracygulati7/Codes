#include<iostream>
using namespace std;
int reversearray(int arr[],int n){
    int start=0, end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int leftshift(int arr[],int n,int k){
    k=k%10;
    for(int i=0;i<k;i++){
        int temp=arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
}
int rightshift(int arr[],int n,int k){
    k=k%10;
    for(int i=0;i<k;i++){
        int temp=arr[n-1];
        for(int j=n-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
}
int main(){
    int n;
    cout<<"enter total no. of elements: "<<" ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter no. of times array to be reversed: "<<" ";
    cin>>k;
    for(int i=0;i<k;i++){
        reversearray(arr,n);
    }
    cout<<"reversed array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"left shift"<<endl;
    leftshift(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"right shift"<<endl;
    rightshift(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}