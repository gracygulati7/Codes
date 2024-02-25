//! kadane's algorithm
//-> jha -ve aajaye final sum then take it as 0 coz 0 is better than -ve
// +ve + +ve = +ve
// big +ve + small -ve = +ve 
// small +ve + big -ve = -ve (not favorable) = 0
//* time complexity-> O(N)

/*
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        maxsum=max(sum,maxsum);
    }
    cout<<"maximum sum of subarray is: "<<maxsum<<endl;
}
*/

// but this code is not beneficial for array elements that contains only all negative numbers.
// for this code to also produce correct output in case all array elements are -ve refer below code:

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        sum=max(arr[i],sum+arr[i]);
        maxsum=max(sum,maxsum);
    }
    cout<<"maximum sum of subarray is: "<<maxsum<<endl;
}