#include<iostream>
#include<string>
using namespace std;
int main(){
    string string1,string2;
    getline(cin,string1);
    getline(cin,string2);
    bool greater=(string1>string2);
    cout<<"string1>string2 "<<(greater? "true":"false")<<endl;
    bool smaller=(string1<string2);
    cout<<"string1<string2 "<<(smaller? "true":"false")<<endl;
    bool equal= (string1==string2);
    cout<<"string1==string2 "<<(equal? "true":"false")<<endl;
}