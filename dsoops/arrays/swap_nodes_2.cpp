#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    int k; cin>>k;
    swap(arr[k-1],arr[n-k]);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}