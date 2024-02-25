#include<iostream>
using namespace std;
class animal{

    public:
    int weight;
    int age;

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

class human{
    public:
    string color;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

//multiple inheritance
class hybrid:public animal, public human{

};

int main(){

    hybrid h;
    h.speak();
    h.bark();

    return 0;
}