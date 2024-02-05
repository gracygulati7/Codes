#include<iostream>
#include<vector>
using namespace std;
void toprint(vector<int>& arr,int index,int target,vector<int>& subset){
    if(target==0){
        for(int num:subset){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    if(index>arr.size() || target<0) return;
    for(int i=index;i<arr.size();i++){
        if(i>index && arr[i]==arr[i-1]){
            continue;
        }
        subset.push_back(arr[i]);
        toprint(arr,index+1,target-arr[i],subset);
        subset.pop_back();
    }
}
int main(){
    int n; cin >>n;
    int target; cin>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> subset;
    toprint(arr,0,target,subset);
    return 0;
}