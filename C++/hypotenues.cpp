#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double p;
    double b;
    double h;
    double ps;
    double bs;
    double add;
    double sq;
    cin>> p;
    cin>> b;
    ps=pow(p,2);
    bs=pow(b,2);
    add=ps+bs;
    sq=sqrt(add);
    cout<< sq << endl;
    return 0;
}