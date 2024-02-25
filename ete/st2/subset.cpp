#include<iostream>
#include<algorithm>
using namespace std;
bool issubset(int arr1[],int n,int arr2[],int m){
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]==arr2[j]){
            i++;
            j++;
        }
        else{
            return false;
        }
    }
    return j==m;
}
int main(){
    int n;
    cout<<"enter size of first array: "<<" ";
    cin>>n;
    int arr1[n];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"enter size of second array: "<<" ";
    cin>>m;
    int arr2[m];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    if (issubset(arr1,n,arr2,m)){
        cout<<"arr2 is subset of arr1"<<endl;
    }
    else{
        cout<<"arr2 is not subset of arr1"<<endl;
    }
    return 0;
}