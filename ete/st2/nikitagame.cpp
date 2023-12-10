#include<iostream>
#include<vector>
using namespace std;
int splitarray(vector<int>& arr,int start,int end){
    if(start>=end){
        return 0;
    }
    for(int i=start;i<=end;i++){
        int left=0;
        for(int j=start;j<=i;j++){
            left+=arr[j];
        }
        int right=0;
        for(int j=i+1;j<=end;j++){
            right+=arr[j];
        }
        if(left==right){
            return 1+max(splitarray(arr,start,i),splitarray(arr,i+1,end));
        }
    }
    return 0;
}
int main(){
    int testcases;
    cin>>testcases;
    while(testcases--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int result=splitarray(arr,0,n-1);
        cout<<result<<endl;
    }
    return 0;
}