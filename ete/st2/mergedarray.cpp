#include<iostream>
using namespace std;
void mergedarrays(int arr1[],int n,int arr2[],int m,int result[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            result[k++]=arr1[i++];
        }
        else{
            result[k++]=arr2[j++];
        }
    }
    while(i<n){
        result[k++]=arr1[i++];
    }
    while(j<m){
        result[k++]=arr2[j++];
    }
}
int main(){
    int n,m;
    cout<<"enter array 1 size: "<<" ";
    cin>>n;
    int arr1[n];
    cout<<"enter array 1 ele: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter array 2 size: "<<" ";
    cin>>m;
    int arr2[m];
    cout<<"enter array 2 ele: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int result[n+m];
    mergedarrays(arr1,n,arr2,m,result);
    cout<<"arrays after merging: ";
    for(int i=0;i<n+m;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}