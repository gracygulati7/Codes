#include<iostream>
using namespace std;
class a{
    public:
    void f1(){
        cout<<"inside f1"<<endl;
    }
};
class b:public a{
    public:
    void f2(){
        cout<<"inside f2"<<endl;
    }
};
class c:public a{
    public:
    void f3(){
        cout<<"inside f3"<<endl;
    }
};

int main(){

    a obj1;
    obj1.f1();
    b obj2;
    obj2.f1();
    obj2.f2();
    c obj3;
    obj3.f1();
    obj3.f3();
    return 0;
}