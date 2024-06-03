#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val; cin>>val;
    for(int i=0;i<n;i++){
        arr.erase(remove(arr.begin(),arr.end(),val),arr.end());
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}