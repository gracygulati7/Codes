#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector<int> l1(n,0);
    for(int i=0;i<n;i++){
        cin>>l1[i];
    }
    cin>>m;
    vector<int>l2(m,0);
    for(int i=0;i<m;i++){
        cin>>l2[i];
    }
    vector<int> res; int i=0,j=0; int carry=0;
    reverse(l1.begin(),l1.end());
    reverse(l2.begin(),l2.end());
    while(i<n || j<m || carry){
        int sum=carry;
        if(i<n) sum+=l1[i++];
        if(j<m) sum+=l2[j++];
        carry=sum/10;
        res.push_back(sum%10);
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}