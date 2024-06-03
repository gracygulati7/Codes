#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res;
    for(int i=0;i<n;i++){
        if(i%2==0){ // even indices with odd 1st indexing position
            res.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(i%2!=0){ // odd indices with even 1st indexing position
            res.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
}