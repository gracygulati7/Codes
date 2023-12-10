#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool ispalindrome(const string& word){
    string rev=word;
    reverse(rev.begin(),rev.end());
    return word==rev;
}
int palindrome(const string& input){
    string word;
    int count=0;
    for(char ch:input){
        if(ch!=' '){
            word+=ch;
        }
        else{
            if(ispalindrome(word)){
                count++;
            }
            word="";
        }
    }
    if(ispalindrome(word)){
        count++;
    }
    return count;
}
int main(){
    string input;
    getline(cin,input);
    int palindromicwordscount=palindrome(input);
    cout<<"no. of palindromic words is: "<<palindromicwordscount<<endl;
}