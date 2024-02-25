#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[]="abc";
    int count[26]={};
    for(int i=0;i<strlen(a);i++){
        count=a[i]-'a';
    }
}