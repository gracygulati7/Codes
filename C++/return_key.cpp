#include<iostream>
using namespace std;
double square(double length){
    double area=length*length;
    cout<<"area= "<<area<<endl;
    return area;
}
double volume(double length){
    double volume=length*length*length;
    cout<<"volume= "<<volume<<endl;
    return volume;
}
int main(){
    // return- returns a value from the function
    // return- returns a value back to the spot where you called the encompassing function
    double length=5.0;
    square(length);
    volume(length);
    return 0;

}