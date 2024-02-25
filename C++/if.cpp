#include<iostream>
using namespace std;
int main(){
int n;
cout << "enter your age" << endl;
cin >> n;
if (n==0){
    cout << "you're not born yet" << endl;
}
else if (n<18){
    cout << "you're minor" << endl;
}
else{
    cout << "you're adult" << endl;
}
}
