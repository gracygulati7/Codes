#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // precedence
    // 1. ()
    // 2. ++,--
    // 3. *,/,%
    // 4. +,-
     double x=3.14;
     double y=4;
     double z;
    /* max
       z=max(x,y);
      cout << z << endl; */

    /*  min
      z=min(x,y);
      cout << z << endl; */

    /*  pow
     z=pow(2,4); */

     /* sqrt
     z=sqrt(9);  */

     /* abs (returns positive value for negative number)
     z=abs(-3); */

    z=round(x);
    z=ceil(x);    
    // x rounded up
    z=floor(x);
    //  x rounded down;

    cout << z << endl;
}