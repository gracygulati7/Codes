#include<iostream>
using namespace std;
class animal{

    public:
    int weight;
    int age;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class dog:public animal {

};

int main(){

    dog d;
    d.speak();





    return 0;
}