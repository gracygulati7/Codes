//! find a pair in array with difference target

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]-arr[i]==target){
                cout<<arr[j]<<" "<<arr[i]<<endl;
            }
        }
    }
    return 0;
}