//!Typecasting From String To Int Data Type

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ;                     
    getline(cin,s);
    cout<<s<<endl;
    int num;
    num = stoi(s);
    cout << num<<endl;
    cout<<sizeof(num)<<" "<<sizeof(s)<<endl;
    return 0;
}