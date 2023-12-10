/*#include<iostream>
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
        if(arr[i]==target){
            cout<<i<<" ";
            found=true;
        }
    }
    if(!found){
        cout<<-1<<endl;
    }
    return 0;
}*/

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
        if(arr[i]==target){
            cout<<i<<" ";
            found = true;
        }
    }
    if(!found){
        return -1;
    }
    return 0;
}