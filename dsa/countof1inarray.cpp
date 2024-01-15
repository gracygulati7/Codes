//! given an array that consists of 0's and 1's u need to calculate count of 1's in the array. 
//! 0's are on the left side and 1's are on the right side of array only coz its sorted array.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0, e=n-1;  // initial search space
    int ans=n;       // first ocuurence of 1
    while(s<=e){
        //step 1:find mid
        int mid=(s+e)/2;
        //step 2:conditions(either value is 0 or 1)
        if(arr[mid]==1){
            ans=mid;   // maybe this is first occurence of 1 or maybe not
            e=mid-1;   // hence search on left part
        }
        else if(arr[mid]==0){
            s=mid+1;
        }
    }
    cout<<"count of 1's: "<<n-ans<<endl;
}