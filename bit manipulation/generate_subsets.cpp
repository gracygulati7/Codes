#include<iostream>
using namespace std;
void subsets(int arr[],int n){
    for(int i=0;i<(1<<n);i++){ // 2**n can be written as 1<<n
        for(int j=0;j<n;j++){
            if(i & (1<<j)){ // if num i mein j bit set hai to returns true
                cout<<arr[j]<<" ";
            } 
        }
        cout<<endl;
    }
}
int main(){
    int arr[4]={1,2,3,4};
    subsets(arr,4);
    return 0;
}