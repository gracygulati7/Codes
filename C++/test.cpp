//*input int,long int,char,float,double precision till 3 after decimal in float, in double upto 9

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    long int k;
    char c;
    float m;
    double h;
    // cout << "enter an integer" << endl;
    // cin >> n;
    // cout << "enter a long integer" << endl;
    // cin >> k;
    // cout << "enter a character" << endl;
    // cin >> c;
    // cout << "enter a float number" << endl;
    // cin >> m;
    // cout << "enter a double number" << endl;
    // cin >> h;
    cin >> n >> k >> c >> m >> h;
    cout << n << endl;
    cout << k << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << m << endl;
    cout << fixed << setprecision(9) << h << endl;
}