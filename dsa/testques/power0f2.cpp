//! if a num say x is > 0 and (x & x-1)==0 then the num is said to be a power of two number. 

#include<iostream>
using namespace std;
bool isbool(int x){
    if(x>0){
        if((x & x-1)==0){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if (isbool(n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}