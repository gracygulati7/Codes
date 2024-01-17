#include<iostream>
#include<cstring>
using namespace std;
int main(){
/*
    //we have to specify null character at the end of character array to terminate it.
    //otherwise garbage value will be printed after d

    char c[5]={'a','b','c','d','\0'};
    cout<<c<<endl;    // c prints all elements of charcater array till it gets terminated by null and not their address.
    
    //* To print all elements of charcater array using for loop:-
    for(int i=0;c[i]!='\0';i++){
        cout<<c[i]<<endl;
    }

    //we have to specify size for null charcater too
    //because compiler adds null character at end of charcater array.

    char s[5]="abcd";
    cout<<s<<endl;

    int a[]={1,2,3,4,5};
    cout<<a<<endl;    // a stores address of first element of integer array.

    //input charcater array:-
    char b[100];
    cin>>b;   // cin ignores space (stops taking input as soon as it encounters a space.)
    cout<<b<<endl;


    // 1st method
    char ch=cin.get();    // cin.get() -> takes character as input from user and dosent ignore whitespaces.
    char a[100];
    int i=0;
    while(ch!='#'){
        a[i]=ch;
        ch=cin.get();
        i++;
    }
    a[i]='\0';
    cout<<a<<endl;
*/

    // 2nd method
    char ab[100];
    cin.getline(ab,100,'#');
    cout<<ab<<endl;

    cout<<strlen(ab)<<endl;  // does not include null character in length
    char b[100];
    strcpy(b,ab);  // copies second parameter (char array) into first parameter (char array)
    cout<<b<<endl;
    return 0;
}