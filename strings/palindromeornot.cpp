#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
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