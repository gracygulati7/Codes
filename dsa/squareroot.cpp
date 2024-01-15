//! square root of a number using binary search

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if((mid*mid)==n){
            cout<<mid<<endl;
            break;
        }
        else if((mid*mid)<n){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
}