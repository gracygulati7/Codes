#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int currentelement=arr[0];
    int frequency=1;
    for(int i=1;i<n;i++){
        if(arr[i]==currentelement){
            frequency++;
        }
        else{
            cout << frequency << " ";
            currentelement=arr[i];
            frequency=1;
        }
    }
   cout  << frequency <<  " ";
}