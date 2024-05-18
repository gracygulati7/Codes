//! find the min element in unsorted array and swap it with element at the beginning
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
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
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