#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
            break;
        }
    }
    return -1;
}
int main(){

    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    if(linearsearch(arr,n,target)==-1){
        cout<<"target not present";
    }
    else{
        cout<<"index is: "<<linearsearch(arr,n,target)<<endl;
    }
    return 0;
}
