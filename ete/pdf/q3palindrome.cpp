//! run only one code at a time and comment out the other one.

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    //for integer
    int n;
    cin>>n;
    int rev;
    int rem;
    int res=n;
    while(res>0){
        rem=res%10;
        rev=rev*10+rem;
        res=res/10;
    }
    if(rev==n){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    //for string
    string str;
    getline(cin,str);
    string revstr=str;
    reverse(revstr.begin(),revstr.end());
    if(revstr==str){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}