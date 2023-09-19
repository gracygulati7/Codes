#include<iostream>
using namespace std;

int num=3;            // global variable

void printnum(int num){
    num=2;
    cout <<:: num<<endl;

}

int main(){
    // local variables - declared inside a function or a block of curly brackets
    //  global variables - declared outside all functions  and accessible to all functions inside a program.
    int num=1;
    // cout << num <<endl;
    printnum(num);
    cout << ::num<<endl;
    return 0;
}
// global is used when there is no declaration of a variable
// if local variable is declared then it is used instead of global 
// local>global
// if we use (::) scope resolution operator then it will take on global variable's value
// global variable is less secure and pollutes gloabl space hence its preferred not to use it.