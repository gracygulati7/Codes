#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    //* 1. UPPER CASE TO LOWER CASE OR VICE VERSA!
    string str="gracygulati";
    // cout<<'a'-'A'<<endl; lower case are 32 aage from A
    //convert into upper case
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    //convert into lower case
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout<<str<<endl;

    // inbuilt func:
    string s="hellomynameisgracy";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

    //* 2. FORM THE BIGGEST NUMBER FROM NUMERIC STRING
    string num="12345852";
    sort(num.begin(),num.end(),greater<int>());
    cout<<num<<endl;

    //* 3. GIVEN A STRING. FIND THE MAXIMUM OCCURING CHARACTER.
    string stri="GracyGulati";
    transform(stri.begin(),stri.end(),stri.begin(),::tolower);
    int maxcount=0; char res;
    for(int i=0;i<stri.size();i++){
        int count=1;
        for(int j=i+1;j<stri.size();j++){
            if(stri[i]==stri[j]){
                count++;
            }
        }
        if(count>maxcount || (count==maxcount && stri[i]<res)){
            maxcount=count;
            res=stri[i];
        }
    }
    cout<<"max occuring char is "<<res<<" and it occurs "<<maxcount<<" times."<<endl;

    //* 4. GIVEN A ROUTE CONTAINING 4 DIRECTIONS (E,W,N,S), FIND THE SHORTEST PATH TO REACH DESTINATION.
    //? PATH => "WNEENESENNN"
    //! displacement(shortest path) -> underroot of [(x2-x1)^2 + (y2-y1)^2]
    //? logic: x=0,y=0, N=y+1, S=y-1, E=x+1, W=x-1
    string path;
    cin>>path;
    transform(path.begin(),path.end(),path.begin(),::toupper);
    int x1=0,y1=0; int x2=0,y2=0;
    for(int i=0;i<path.size();i++){
        if(path[i]=='N'){
            y2++;
        }
        else if(path[i]=='S'){
            y2--;
        }
        else if(path[i]=='E'){
            x2++;
        }
        else if(path[i]=='W'){
            x2--;
        }
    }
    int pow1= pow((x2-x1),2);
    int pow2= pow((y2-y1),2);
    int disp= sqrt(pow1+pow2);
    cout<<disp<<endl;

    //* 5. 





    return 0;
}