#include<iostream>
using namespace std;
int main(){
    /* type conversion - converting a value of one data type to another
    two types-
    1. implicit - automatic
    2. explicit - precede value with new data type
    */

// implicit
int x=3.14;
cout << x << endl;                 

char c=100;
cout << c << endl;
// converted using ascii code

// explicit
int correct =8;
int ques=10;
double score = (float)correct/ques * 100;
cout << score << "%" << endl;
}
