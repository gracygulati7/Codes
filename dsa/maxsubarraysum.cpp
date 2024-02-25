<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxsum=0;
    for(int i=0;i<n;i++){
        int start=i;
        for(int j=i;j<n;j++){
            int end=j;
            sum=0;
            for(int k=start;k<=end;k++){
                sum+=arr[k];
            }
            cout<<sum<<endl;
            if(sum>maxsum){
                maxsum=sum;
            }
        }
    }
    cout<<"maximum sum of subarray is: "<<maxsum<<endl;
}

=======
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxsum=0;
    for(int i=0;i<n;i++){
        int start=i;
        for(int j=i;j<n;j++){
            int end=j;
            sum=0;
            for(int k=start;k<=end;k++){
                sum+=arr[k];
            }
            cout<<sum<<endl;
            if(sum>maxsum){
                maxsum=sum;
            }
        }
    }
    cout<<"maximum sum of subarray is: "<<maxsum<<endl;
}

>>>>>>> c02c454dc389c7d36a249c49ad7cd7e536f9c57e
//! brute force method -> time complexity O(N^3)