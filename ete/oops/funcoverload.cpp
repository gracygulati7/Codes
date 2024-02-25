#include<iostream>
using namespace std;
class a{

    public:
    void sayhello(){
        cout<<"hello gracy"<<endl;
    }

    public:
    void sayhello(string name){
        cout<<"hello "<<name <<endl;
    }

    public:
    int sayhello(char name){
        cout<<"hello "<<name<<endl;
        return 1;
    }

};

int main(){

    a obj;
    obj.sayhello();


    return 0;
}