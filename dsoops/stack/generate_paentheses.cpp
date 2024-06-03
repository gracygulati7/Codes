#include<bits/stdc++.h>
using namespace std;
void generate(int n,int open,int close,string& s){
    if(close==n){
        cout<<s<<endl;
    }
    if(open>close){
        s.push_back(')');
        generate(n,open,close+1,s);
        s.pop_back();
    }
    if(open<n){
        s.push_back('(');
        generate(n,open+1,close,s);
        s.pop_back();
    }
}
int main(){
    int n; cin>>n;
    string s;
    generate(n,0,0,s);
    return 0;
}