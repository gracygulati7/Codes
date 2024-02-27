//! pointer to pointer 

#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    cout<<"value of a: "<<*p<<endl; // 10
    cout<<"address of a: "<<p<<endl;
    int **q=&p; // pointer to p 
    // stores address of p (which is also the address of variable 'a')
    cout<<"address of p: "<<*q<<endl; // 1 time dereference prints address of p
    cout<<"value of p: "<< **q<<endl; // 2 times dereference prints value of a (bcoz p address points a value of a)
    // meaning hum q ke andr ke pointer p jis value ko point kr rha h usko nikal skte hai
    **q=12;
    cout<<"value of a: "<<a<<endl; // modified value of a
    return 0;
}