#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    if(n==0) return 5;
    int res=0,place=1;
    while(n>0){
        int digit=n%10;
        if(digit==0) digit=5;
        res+=digit*place;
        place*=10;
        n/=10;
    }
    return res;
}
int main(){
    int n; cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}


//* Approach:
/*
initialize res=0 and place=1
if n==0 return 5
while n>0 :
1. take one digit of n by digit=n%10
2. if the digit=0 replace it by 5
3. then place the digit to its rightful position in resultant by res+=digit*place
4. then move place to next by place*=10
5. then remove the digit from n by n/=10
6. return res
*/