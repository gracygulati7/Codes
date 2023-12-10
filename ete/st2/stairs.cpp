// ! 1. we need to calculate no. of ways to reach the top of stairs

#include<iostream>
using namespace std;
int helper(int n,int m){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ways=0;
    for(int i=1;i<=m;i++){
        ways+=helper(n-i,m);
    }
    return ways;
}
int main(){
    int n,m;           // n is no. of steps of stairs and m is no. of jumps
    cin>>n>>m;
    cout<<helper(n,m)<<endl;
    return 0;
}

//! 2. m=1,2,3 only

#include<iostream>
using namespace std;
int countways(int n){
    if(n==0 || n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return countways(n-1) + countways(n-2) + countways(n-3);
}
int main(){
    int n;
    cin>>n;
    int ways= countways(n);
    cout<<"total no. of ways is: "<<ways<<endl;
    return 0;
}