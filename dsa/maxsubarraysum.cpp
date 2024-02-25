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
    for(int i=0;i<n;i++){
        int start=i;
        for(int j=i;j<n;j++){
            int end=j;
            sum=0;
            for(int k=start;k<=end;k++){
                sum+=arr[k];
            }
            cout<<sum<<endl;
            if(sum>maxsum){
                maxsum=sum;
            }
        }
    }
    cout<<"maximum sum of subarray is: "<<maxsum<<endl;
}

//! brute force method -> time complexity O(N^3)