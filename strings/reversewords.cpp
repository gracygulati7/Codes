//! for reversing entire string
/*  
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string rev=str;
    reverse(rev.begin(),rev.end());
    cout<<rev<<endl;
}  
*/

//* for reversing each word of the string
/*    
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    size_t start=0;
    for(size_t i=0;i<=str.length();i++){
        if(i==str.length() || str[i]==' '){
            reverse(str.begin()+start,str.begin()+i);
            start=i+1;
        }
    }
    cout<<str<<endl;
}    
*/