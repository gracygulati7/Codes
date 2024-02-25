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
    int e=n-1; int ans=-1;
    while(s<=e){
        //step 1: calculate mid=s+e/2
        int mid=(s+e)/2;
        //step 2: check conditions of target with respect to mid
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        //left prt: s,s+1,......,mid
        //right part: mid,mid+1,...,e

        //left sorted ?
        if(arr[s]<=arr[mid]){   //left part is sorted
            if(target>=arr[s] and target<=arr[mid]){
                //if target is present in this part
                //search on left part and discard right part
                e=mid-1;
            }
            else{
                //if target is not present in this part
                //dicard left part and search for target
                //element on right part
                s=mid+1;
            }
        }
        else if(arr[mid]<=arr[e]){  //right part is sorted
            if(target>=arr[mid] and target<=arr[e]){
                //if target is present int this part
                //search on right part nd discard left part
                s=mid+1;
            }
            else{
                //if target is not present in this part
                //discard right part and search for target
                //element on left part
                e=mid-1;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}