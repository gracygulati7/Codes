#include<iostream>
using namespace std;
int updatebit(int n,int pos,int value){
    // clear bit
    int mask=~(1<<pos);
    n=n&mask;
    // set bit to value
    return (n|(value<<pos));
}
int main(){
    cout<<updatebit(5,1,1)<<endl;
    return 0;
}

/*
so in this we are given a position and we are also given to what value should the bit at given position be updated.
for eg n=0101 
suppose we need to update bit at position,i=1 to 1.
update is nothing but clear bit and then set bit
1<<i=0010
~0010=1101
0101 & 1101 = 0101
1<<i=0010 [value<<position]
0101 | 0010 = 0111 which is 7. [n|(value<<pos)].
*/