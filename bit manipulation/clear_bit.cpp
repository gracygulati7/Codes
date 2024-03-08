#include<iostream>
using namespace std;
int clearbit(int n,int pos){
    return (n&(~(1<<pos)));
}
int main(){
    cout<<clearbit(5,2)<<endl;
    return 0;
}

/*
clear bit means the position which we are given, we need to set that bit as 0 
n=0101
suppose we need to clear bit at position, i=2, 
so to achieve this we will again take left shift of 1 by i (1<<i) and then take 1's complement of resulting number
-> 1<<i=0100 -> ~(0100) -> 1011
and now if we take & of n and resulting number so we will clear the bit at that position 
-> 1011 & 0101 = 0001 which is 1.
*/