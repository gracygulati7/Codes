#include<iostream>
using namespace std;
int main(){
    //!deletion at 0th index
    /* int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    n--;
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } */

    //! deletion at kth index
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    n--;
    int k;
    cin>>k;
    for(int i=k;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
