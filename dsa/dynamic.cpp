#include<iostream>
using namespace std;
int main(){
    // int a[5]={};
    // for(int i=0;i<5;i++){
    //     cout<<a[i]<<" ";
    // }
    int *p=new int[50];
    //! lhs is on stack not on heap while rhs is in heap memory.
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
        }
    return 0;
}