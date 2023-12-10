#include<iostream>
#include<string>
using namespace std;
string longest(const string& str){
    string longestword;
    string currentword;
    for(char ch:str){
        if(ch!=' '){
            currentword+=ch;
        }
        else{
            if(currentword.length()>longestword.length()){
                longestword=currentword;
            }
            currentword="";
        }
    }
    if(currentword.length()>longestword.length()){
        longestword=currentword;
    }
    return longestword;
}
int main(){
    string str;
    getline(cin,str);
    string longestword= longest(str);
    if(!longestword.empty()){
        cout<<"longest word: "<<longestword<<endl;
    }
    else{
        cout<<"empty string entered!"<<endl;
    }
}