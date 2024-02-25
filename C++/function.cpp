#include<iostream>
using namespace std;
void hbd(string name,int age){
    cout << "happy birthday to you"<<endl;
    cout << "happy birthday to you"<<endl;
    cout << "happy birthday dear "<<name <<endl;
    cout << "happy birthday to you"<<endl; 
    cout << "you are "<<age<<" years old" <<endl;
}
int main(){
    string name="gracy";   
    int age=19;
    hbd(name,age);
    
    // if we define function after int main then we need to write void/int <function name> before main...
    
}