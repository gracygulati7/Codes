#include<bits/stdc++.h>
using namespace std;
int ugly(int n){
    if(n<=0) return 0;
    vector<int> ans(n);
    ans[0]=1;
    int a=0,b=0,c=0;
    for(int i=1;i<n;i++){
        int num=min({ans[a]*2,ans[b]*3,ans[c]*5});
        ans[i]=num;
        if(num==ans[a]*2) a++;
        if(num==ans[b]*3) b++;
        if(num==ans[c]*5) c++;
    }
    return ans[n-1];
}
int main() {
    int n;
    cin >> n;
    cout << ugly(n) << endl;
    return 0;
}