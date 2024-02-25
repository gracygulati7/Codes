#include<iostream>
using namespace std;

void bakepizza(){
    cout<<"here is your pizza"<<endl;
}

void bakepizza(string topping1){
    cout<<"here is your "<< topping1 <<"pizza"<<endl;
}

void bakepizza(string topping1, string topping2){          // function name + its paramter = function signature
    cout<<"here is your "<< topping1 << "and" << topping2 <<"pizza"<<endl;
}

int main(){
    bakepizza("pepperoni ", " burn to hell ");
    return 0;
}