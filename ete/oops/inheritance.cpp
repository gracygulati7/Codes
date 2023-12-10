#include<iostream>
using namespace std;
class human{

    public:
    int height;
    int weight;
    int age;

    public:
    int getage(){
        return this->age;
    }
    void setweight(int w){
        this->weight=w;
    }
};

class male:protected human{

    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    int getheight(){
        return this->height;
    }
};
int main(){

    male m1;
    cout<<m1.getheight()<<endl;

    /* male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.color<<endl;
    obj1.sleep();
    obj1.setweight(54);
    cout<<obj1.weight<<endl;  */

    return 0; 
}