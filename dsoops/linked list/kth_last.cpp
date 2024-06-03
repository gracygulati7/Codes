#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    while(true){
        int n; cin>>n;
        if(n==-1) break;
        arr.push_back(n);
    }
    int k; cin>>k;
    if(arr.size()<k) cout<<"Not Pssible"<<endl;
    else cout<<arr[arr.size()-k]<<endl;
}