//! given an array where first k num are even num and rest are odd num find the value of k (count of even num)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        //step 1: calculate mid=s+e/2
        int mid=(s+e)/2;
        //step 2: check conditions of target with respect to mid
        if(arr[mid]%2==0){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    if(ans==-1){
        cout<<"no even numbers in array"<<endl;
    }
    else{
        cout<<"no. of even numbers: "<<ans+1<<endl;
    }
    return 0;
}