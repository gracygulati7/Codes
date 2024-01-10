#include<iostream>
using namespace std;
int main(){
    //! inserting at 0th index
    /* int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int num;
    cin>>num;
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=num;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } */

    //! insertion at kth element
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int num;
    cin>>num;
    int k;
    cin>>k;
    for(int i=n-1;i>=k;i--){
        arr[i+1]=arr[i];
    }
    arr[k]=num;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}