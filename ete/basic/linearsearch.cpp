#include<iostream>
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if (key==arr[i]){
            return i;
        }
    }
    return -1;
}
using namespace std;
int main(){
    int n;
    cin>>n;
   
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   int key;
   cin>>key;
   
   if(linearsearch(arr,n,key)==-1){
    cout<<"key dosent exist"<<endl;
   }
   else{
    cout<<"index of key is "<<linearsearch(arr,n,key)<<endl;
   }
    return 0;
}