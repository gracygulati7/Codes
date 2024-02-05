#include<iostream>
#include<string>
using namespace std;
bool isrotation(const string& str1,const string& str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    string concatenatedstring=str1+str1;
    return concatenatedstring.find(str2)!=string::npos;
}
int main(){
    string str1;
    string str2;
    getline(cin,str1);
    getline(cin,str2);
    if(isrotation(str1,str2)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}