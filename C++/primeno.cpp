#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    // int c=sqrt(n);
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout << "not prime" << endl;
            break;
        }
        else{
            cout <<"prime"<<endl;
            break;
        }
    }
    return 0;
}