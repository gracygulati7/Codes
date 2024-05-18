#include<iostream>
using namespace std;
class rec {
    int len;
    int br;
public:
    rec() {
        len = 0;
        br = 0;
    }
    rec(int l, int b) {
        len = l;
        br = b;
    }
    void peri() {
        cout << "Perimeter = " << 2 * (len + br) << endl;
    }
    void ar() {
        cout << "Area = " << len * br << endl;
    }
    void disp() {
        cout << "Length = " << len << endl << "Breadth = " << br << endl;
    }
};
int main() {
    rec rect1(5, 5);
    rect1.disp();
    rect1.ar();
    rect1.peri();
    rec r(3, 4);
    r.disp();
    r.ar();
    r.peri();
    return 0;
}