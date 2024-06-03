#include<bits/stdc++.h>
using namespace std;
vector<int> add(vector<int>& l1,vector<int>& l2){
    int n1=(int)l1.size(); int n2=(int)l2.size();
    int carry=0; int sum; vector<int> ans;
    int i=0,j=0;
    while(i<n1 || j<n2){
        int curr=carry;
        if(i<n1){
            curr+=l1[i];
            i++;
        }
        if(j<n2){
            curr+=l2[j];
            j++;
        }
        carry=curr/10;
        sum=curr%10;
        ans.push_back(sum);
    }
    return ans;
}
int main(){
    int n1,n2; cin>>n1>>n2;
    vector<int> l1(n1,0), l2(n2,0);
    for(int i=0;i<n1;i++) cin>>l1[i];
    for(int i=0;i<n2;i++) cin>>l2[i];
    auto ans=add(l1,l2);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}