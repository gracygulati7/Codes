//! calculate first occurence of a num in array using binary search
/* 
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
    sort(arr,arr+n);                               // sorting the array
    int target;
    cin>>target;
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        //step 1: calculate mid=s+e/2
        int mid=(s+e)/2;
        //step 2: check conditions of target with respect to mid
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
    }
    if(ans==-1){
        cout<<"element not present"<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}
*/

//! calculate last occurence of a num in array using binary search
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
    sort(arr,arr+n);                               // sorting the array
    int target;
    cin>>target;
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        //step 1: calculate mid=s+e/2
        int mid=(s+e)/2;
        //step 2: check conditions of target with respect to mid
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
    }
    if(ans==-1){
        cout<<"element not present"<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}