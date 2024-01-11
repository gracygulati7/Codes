#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pre[1000];
    pre[0]=arr[0];                       // pre[i] -> sum of elements from 0th index to ith index
    for(int i=1;i<n;i++){
        pre[i]=arr[i]+pre[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    //! sum from left index to right index
    cout<<endl;
    int rindex,lindex;
    cin>>lindex>>rindex;
    cout<<pre[rindex]-pre[lindex-1]<<endl;
    return 0;
}