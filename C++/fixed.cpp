#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double n=42.9278267;
cout << "5: " << setprecision(5) << n << endl;
cout << "fixed " << fixed << setprecision(5) << n << endl;
}