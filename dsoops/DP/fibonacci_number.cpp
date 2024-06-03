#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    if(n<=1) return n;
    vector<int> ans(n+1,0);
    ans[0]=0, ans[1]=1;
    for(int i=2;i<=n;i++){
        ans[i]=ans[i-1]+ans[i-2];
    }
    return ans[n];
}
int main(){
    int n; cin>>n;
    cout<<solve(n)<<endl;
}