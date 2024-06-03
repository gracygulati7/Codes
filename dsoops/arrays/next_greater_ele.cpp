#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>& arr){
    int n=arr.size();
    vector<int> ans(n,-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && arr[j]>arr[i]){
                ans[i]=arr[j];
                break;
            }
        }
    }
    return ans;
}
int main(){
    int n; cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> res=solve(arr);
    for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
    return 0;
}