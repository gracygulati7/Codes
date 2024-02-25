//! find index of target in array if target is present, otherwise
//! print index of number which is just smaller than this target
//! given that the array is sorted.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int target;
    cin>>target;
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        else if(arr[mid]<target){
            ans=mid;                 // this could be the element just smaller than target
            s=mid+1;                 // otherwise search on the right part of the array
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}