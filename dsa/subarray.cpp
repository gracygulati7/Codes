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
    int ts=0;
    for(int i=0;i<n;i++){
        int start=i;
        for(int j=i;j<n;j++){
            int end=j;
            for(int k=start;k<=end;k++){
                cout<<arr[k]<<" ";
            }
            ts++;
        cout<<endl;
        }
        cout<<endl;
    }
    cout<<"total subarrays: "<<ts<<endl;
}

/*
subarray - continuous part of array.
eg- arr=[2,4,6,8]
subarrays of 2= (2), (2,4), (2,4,6), (2,4,6,8)
subarrays of 4= (4), (4,6), (4,6,8)
subarrays of 6= (6), (6,8)
subarrays of 8= (8)
logic-
start-> for int i=0 to `i<n`
int start=i
end-> for int j=i to `j<n`  // starts from i bcz in subarray we also take the digit to be paired by itself
int end=j
for(int k=start to k<=end)
print arr[k]
total no. of subarrays = (n(n+1))/2
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
    int ts=0;
    for(int i=0;i<n;i++){
        int start=i;
        for(int j=i;j<n;j++){
            int end=j;
            for(int k=start;k<=end;k++){
                cout<<arr[k]<<" ";
            }
            ts++;
        cout<<endl;
        }
        cout<<endl;
    }
    cout<<"total subarrays: "<<ts<<endl;
}

/*
subarray - continuous part of array.
eg- arr=[2,4,6,8]
subarrays of 2= (2), (2,4), (2,4,6), (2,4,6,8)
subarrays of 4= (4), (4,6), (4,6,8)
subarrays of 6= (6), (6,8)
subarrays of 8= (8)
logic-
start-> for int i=0 to `i<n`
int start=i
end-> for int j=i to `j<n`  // starts from i bcz in subarray we also take the digit to be paired by itself
int end=j
for(int k=start to k<=end)
print arr[k]
total no. of subarrays = (n(n+1))/2
>>>>>>> c02c454dc389c7d36a249c49ad7cd7e536f9c57e
*/