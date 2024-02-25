//! prefix array
// prefix = prefix[i-1] + arr[i]
//* time complexity = O(N^2)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxsum=0;
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        int start=i;
        for(int j=i;j<n;j++){
            int end=j;
            sum= start==0? prefix[end]:prefix[end]-prefix[start-1];
            if(sum>maxsum){
                maxsum=sum;
            }
        }
    }
    cout<<"maximum sum of subarray is: "<<maxsum<<endl;
}