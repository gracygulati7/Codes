#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string rotatestr(const string& str,int k){
    string result=str;
    k=k%str.length();
    rotate(result.begin(),result.begin()+result.length()-k,result.end());
    return result;
}
int main(){
    string str;
    int k;
    getline(cin,str);
    cin>>k;
    string rotatedstring=rotatestr(str,k);
    cout<<"rotated string is: "<<rotatedstring<<endl;
    return 0;
}