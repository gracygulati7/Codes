#include<iostream>
using namespace std;
class a{
    public:
    void abc(){
        cout<<"i am a"<<endl;
    }
};
class b{
    public:
    void abc(){
        cout<<"i am b"<<endl;
    }
};
class c:public a, public b{
    
};

int main(){

    c obj;
    obj.a::abc();
    obj.b::abc();
    return 0;
}