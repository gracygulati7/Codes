#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i+=2){
        swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}