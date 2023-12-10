#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max= INT_MIN;
    int min= INT_MAX;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    return 0;
}