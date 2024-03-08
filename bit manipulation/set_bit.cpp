#include<iostream>
using namespace std;
int setbit(int n,int pos){
    return (n|(1<<pos));
}
int main(){
    cout<<setbit(5,1)<<endl;
    return 0;
}

/*
set krne ka mtlb hota hai 1 and unset krne ka mtlb hota hai 0.

suppose n=0101
and we need to set bit at position i = 1
we take position from left sides means in 0101 from right we take 1 as 0 index, 0 as 1 index, 1 as 2 index and lastly 0 as 3 index.
so we will left shift 1 by i (1<<i) which in this case will give 0100
coz 1 in binary in 0001 and left shifting it by i=1 then it makes (1<<i=0100) 
(we do this because if we left shift the 1 by i position and take then | of n and resulting number after left shift will set us the bit at given position as 1)
then we will take | of n and (1<<i) 
0101 | 0100 = 0111 which is binary representation of 7.
we do this coz we need to set the bit at given position as 1 so when we take | of n and (1<<i) we will set the bit at given position as 1 coz if the original bit is 0 having | with 1 will also set it 1 nd same if the original bit is 0.

left shift means shifting a number to left by the no. of times mentioned
like a<<n means shifting a number to left by n times.

we do | here coz we need to set bit 1 and doing | of n and (1<<i) will set the bit to 1 even if original bit is either of 0 or 1.
*/