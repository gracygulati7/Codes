<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int ans=0;
    int place=1;
    while(num>0){
    int rem=num%2;
    ans=ans+place*rem;
    // cout<<rem<<endl;
    num=num/2;
    place=place*10;
    }
    cout<<ans<<endl;
    return 0;
=======
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int ans=0;
    int place=1;
    while(num>0){
    int rem=num%2;
    ans=ans+place*rem;
    // cout<<rem<<endl;
    num=num/2;
    place=place*10;
    }
    cout<<ans<<endl;
    return 0;
>>>>>>> c02c454dc389c7d36a249c49ad7cd7e536f9c57e
}