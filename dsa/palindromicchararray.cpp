//? check char array is palindromic or not
//strlen doesnt consider null char
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char c[100];
    cin>>c;
    int n=strlen(c);
    int i=0,j=n-1;
    while(i<j){
        if(c[i]!=c[j]){
            cout<<"not a palindrome"<<endl;
            break;
        }
        i++;
        j--;
    }
    if(i>=j){
        cout<<"it is a palindrome"<<endl;
    }
    return 0;
}