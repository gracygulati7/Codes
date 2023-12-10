#include<iostream>
using namespace std;
class shape{
    public:
    virtual int calculatearea(){
        cout << "Area of the shape" << endl;
        return 0;
    }
};
class circle:public shape{
    public:
    double r,area;
    int calculatearea() override{
        cout << "Enter the radius of the circle: ";
        cin >> r;
        area=3.14*r*r;
        cout << "Area of the circle: " << area << endl;
    }
};
class rectangle:public shape{
    public:
    double l,b,area;
    int calculatearea() override{
        cout << "Enter the length and breadth of the rectangle: ";
        cin >> l>>b;
        area=l*b;
        cout << "Area of the rectangle: " << area << endl;
    }
};
int main(){
    shape* ptr;
    circle obj1;
    ptr=&obj1;
    ptr->calculatearea();
    rectangle obj2;
    ptr=&obj2;
    ptr->calculatearea();
    return 0;
}