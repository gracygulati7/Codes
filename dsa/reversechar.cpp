//? reverse a character array
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[100];
    cin>>a;
    int end=strlen(a)-1;
    int start=0;
    while(start<end){
        char temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
    cout<<a<<endl;
}