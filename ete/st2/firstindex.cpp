#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    bool found=false;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            cout<<i<<endl;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"-1"<<endl;
    }
    return 0;
}