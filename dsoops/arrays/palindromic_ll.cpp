#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool palindromic=true;
    int s=0, e=n-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            palindromic=false;
        }
        s++; e--;
    }
    cout<<palindromic<<endl;
}