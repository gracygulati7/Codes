#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
    // for user input string using spaces we must add getline function  
    cout<< "whats your name? " <<endl;
    getline(cin,name);
    cout<< "whats your age? " <<endl;
    cin >> age;
    cout<< "hello " << name << endl;
    cout<< "you are " << age << " years old" << endl;


    //  for whitespace characters (if cin is followed by getline)
    cout<< "whats your age? " <<endl;
    cin >> age;
    cout<< "whats your name? " <<endl;
    getline(cin >> ws,name);
    cout<< "hello " << name << endl;
    cout<< "you are " << age << " years old" << endl;

    cout << name.length() <<endl;
    // give u length of the string

    name.empty();
    // it will give if name is empty or not

    name.clear();
    // it clears your name

    name.append("@gmail.com");
    // it will append @gmail.com to my name

    name.at(0);
    // it will return character at given index

    name.insert(0,"@");
    // it will insert the enter string/char at the index mentioned in your string

    name.find(" ");
    // it will return the index position where space appears first in string entered

    name.erase(0,3);
    // it will remove first 3 letters of my string


    return 0;
}