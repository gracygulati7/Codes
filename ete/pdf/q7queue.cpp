#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    priority_queue<int> pq(arr.begin(),arr.end());
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}