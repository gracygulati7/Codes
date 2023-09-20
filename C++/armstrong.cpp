#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ld;
    int sum=0;
    int num=n;
    while(n>0){
        ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
    }
    if(sum==num){
        cout<<"armstrong no."<<endl;
        return 0;
    }
    else{
        cout<<"not armstrong"<<endl;
        
    }
    return 0;
}