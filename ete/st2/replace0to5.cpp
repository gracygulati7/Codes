#include<iostream>
using namespace std;
int replaceto5(int n){
    int result=0;
    int multiply=1;
        while(n>0){
        int digit=n%10;
        if(digit==0){
            digit=5;
        }
        result+=digit*multiply;
        multiply*=10;
        n/=10;
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int convertednumber=replaceto5(n);
    cout<<"number after conversion is: "<<convertednumber<<endl;
    return 0;
}