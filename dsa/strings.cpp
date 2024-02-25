#include<iostream>
using namespace std;
int main(){

    //* enter-> '\n'
    int x;
    cin>>x;
    char a[100];
    cin.get();        // take new line as input and ignore it
    cin.getline(a,100,'#');   //new line is termination of cin.getline() by default if you dont give any delimiter.

    //? syntax of cin.getline(char input,max limit of char,delimiter)

    cout<<x<<endl;
    cout<<a<<endl;

    //! always rememeber if u take int input and then take string input using cin.getline(),
    //! you will always have to use cin.get() to ignore the new line character.

    // char ch1=cin.get();
    // char ch2=cin.get();
    // char ch3=cin.get();
    // cout<<ch1<<ch2<<ch3<<endl;
    
    //? space,null and new line are also characters considered.
    return 0;
}