/*#include<iostream>
#include<vector>
using namespace std;
int equi(vector<int> arr,int n){
    int left=0; 
    int total=0;
    for(int i=0;i<n;i++){
        total+=arr[i];
    }
    for(int i=0;i<n;i++){
        total-=arr[i];
        if(total==left){
            return i;
        }
        left+=arr[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<equi(arr,n);
    return 0;
}*/

#include<iostream>
#include<vector>
using namespace std;
int equi(vector<int> arr,int n){
    int left=0,total=0;
    for(int i=0;i<n;i++){
        total+=arr[i];
    }
    for(int i=0;i<n;i++){
     total-=arr[i];
        if(total==left){
            return i;
        }  
        left+=arr[i]; 
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<equi(arr,n);
    return 0;
}


