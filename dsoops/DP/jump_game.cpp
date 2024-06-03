#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int>& nums){
    int n=nums.size();
    if(n==1) return true;
    int i=0;
    while(i<n){
        int temp=nums[i];
        if(temp==0 && i!=n-1){
            int j=i-1;
            while(j>=0 && nums[j]<=i-j){
                j--;
            }
            if(j<0) return false;
            i=j;
        }
        else i+=temp;
        if(i>=n-1) return true;
    }
    return false;
}
int main(){
    int n; cin>>n;
    vector<int> nums(n,0);
    for(int i=0;i<n;i++) cin>>nums[i];  
    cout<<solve(nums)<<endl;
}


//* APPROACH:
/*
check if n=1 , if yes then its already last index so return true
if no, then i=0 and start loop while i<n:
1. for every iteration of elements of array store them in a variable called temp (temp=nums[i])
2. now check if temp=0 and i!=n-1 means if we arent at last index
3. if so then initialise another variable j to i-1
4. start another loop while j>=0 and nums[j]<=i-j
5. if so then decrement j
6. if j<0 then return false
7. else if we found an index to jump through ith idex that has 0 and reach to last index then i=j
8. else increment i by temp
9. if i>=n-1 means we reached till last index so then return true 
*/