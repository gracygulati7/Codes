//!In bubble sort we have i iterations so loop goes from 1 to n-i 
//! and no. of iterations will be i-1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"output array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}