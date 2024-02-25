//! given n boxes find max height you can attain in pascal triangle pattern 
#include <iostream>
using namespace std;
int main() {
             
  int n;
  cin>>n;
  int s=0; int e=n;
  int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        int curr=mid*(mid+1)/2;
        if(curr<=n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans<<endl;
    cout<<n-(ans*(ans+1)/2)<<endl;
  return 0;
}