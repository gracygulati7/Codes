//! given is a string. calculate frequency of max occuring character.
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int freq[26]={};
    for(int i=0;i<n;i++){
        int idx=s[i]-'a';
        freq[idx]++;
    }
    // for(int i=0;i<26;i++){
    //     cout<<char(i+'a')<<" "<<freq[i]<<endl;
    // }
    int max=-1;
    int ans=-1;
    for(int i=0;i<26;i++){
        if(freq[i]>max){
            max=freq[i];
            ans=i;
        }
    }
    cout<<char(ans+'a')<<endl;
}