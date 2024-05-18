//! continuous part of the array.
//! no. of subarrays of an array with n elements is- nc2+n = n*(n+1)/2
//* every subarray is a subsequence but every subsequence is not a subarray

//? SUM OF ALL SUBARRAYS.
 
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<" ";
        }
    }
    return 0;
}