#include<iostream>
using namespace std;
namespace first {
    int x=1;
}
namespace second {
    int x=2;
}

int main(){


        // namespace - it provides a solution for preventing 
        // name conflicts in large projects. each entity needs 
        // a unique name. a namespace allows for indetifically 
        // named entities as long as namespaces are different.

        int x=0;
        // int x=1;
        cout << first::x << endl;
        cout << second::x << endl;
        cout << x << endl;

}