#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=n,rev=0,ld;
    while(n>0){
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(rev==num){
        cout<<"palindrome no."<<endl;
        return 0;
    }
    else{
        cout<<"not palindrome no."<<endl;
    }
    return 0;
}