#include<iostream>
using namespace std;
class a{
    public:
    void f1(){
        cout<<"inside f1"<<endl;
    }
};
class d{
    public:
    void f4(){
        cout<<"inside f4"<<endl;
    }
};
class b:public a{
    public:
    void f2(){
        cout<<"inside f2"<<endl;
    }
};
class c:public a,public d{
    public:
    void f3(){
        cout<<"inside f3"<<endl;
    }
};


int main(){

    
    c obj3;
    obj3.f1();
    obj3.f3();
    obj3.f4();
    return 0;
}