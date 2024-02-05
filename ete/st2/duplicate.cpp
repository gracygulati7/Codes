/*#include<iostream>
#include<string>
using namespace std;
string removeadjacentduplicates(const string& str){
    if(str.empty()){
        return "empty string";
    }
    string result="";
    int i=0;
    while(i<str.length()){
        char currentchar=str[i];
        int count=0;
        while(i<str.length() && currentchar==str[i]){
            i++;
            count++;
        }
        if(count==1){
            result+=currentchar;
        }
    }
    if(result==str){
        return str;
    }
    else{
        return removeadjacentduplicates(result);
    }
}
int main(){
    string str;
    getline(cin,str);
    cout<<"input string is: "<<str<<endl;
    string result=removeadjacentduplicates(str);
    cout<<"output string is: "<<result<<endl;
    return 0;}  */

#include<iostream>
#include<string>
using namespace std;
string removeduplicate(const string& str){
    if(str.empty()){
        return "empty string";
    }
    string result="";
    int i=0;
    while(i<str.length()){
        char currentchar=str[i];
        int count=0;
        while(i<=str.length() && currentchar==str[i]){
            count++;
            i++;
        }
        if(count==1){
            result+=currentchar;
        }
    }
    if(result==str){
        return str;
    }
    else{
        return removeduplicate(result);
    }
}
int main(){
    string str;
    getline(cin,str);
    cout<<"input string is: "<<str<<endl;
    string result= removeduplicate(str);
    cout<<"output string is: "<< result <<endl;
    return 0;
}
