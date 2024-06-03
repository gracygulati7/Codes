#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& arr){
    int n=arr.size();

    // left and right arrays store the maximum height of the building to the left and right of the current building
    vector<int>left(n,0),right(n,0);

    if(n<=2) return 0; // we need atleast 3 building to trap some water
    int sum=0; // sum will store the total amount of water trapped above all the buildings

    left[0]=arr[0]; // first building will have no building to the left of it so the maximum height will be the height of the building itself
    right[n-1]=arr[n-1]; // last building will have no building to the right of it so maximum height will be the height of the building itself
    
    // this loop will fill the left array with the maximum height of the building to the left of the current building
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],arr[i]);
    }

    // this loop will fill the right array with the maximum height of the building to the right of the current building
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }

    // this loop will calculate the amount of water trapped above each building and add it to the sum
    for(int i=0;i<n;i++){

        // the amount of water trapped above the current building will be the minimum of 
        // the maximum height of the building to the left and right of the current building
        int water=min(left[i],right[i]);

        // the amount of water trapped above the current building will be the maximum of 0 and 
        // the difference between the maximum height of the building to the left and right of the current building
        // water stores the minimum height of left and right buildings and arr[i] stores the height of current building
        // so trapped water above current building will be the difference between 
        // minimum height of left and right buildings and the height of current building
        int trap=max(0,water-arr[i]);

        sum+=trap; // add the amount of water trapped above the current building to the sum
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<trap(arr)<<endl;
}




//* Approach:
/*
vector -> left,right and sum=0 and check if n<=2 return 0
left[0]=arr[0] and right[n-1]=arr[n-1]
start left loop from 1 to n and left[i]=max(left[i-1],arr[i])
start right loop reverse from n-2 to n>=0 and right[i]=max(right[i+1],arr[i])
start last Loop from 0 to n and in that:
1. calculate water=min(left[i],right[i])
2. calculate trap=max(0,water-arr[i])
3. lastly, sum+=trap
then return sum
*/