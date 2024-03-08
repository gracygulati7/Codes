#include <iostream>
using namespace std;
int getbit(int n,int pos){
    return ((n&(1<<pos))!=0);
}
int main(){
    cout<<getbit(5,2)<<endl;
    return 0;
}

//* LOGIC:
/*
suppose n=0101
and we need to get bit at position i = 2
we take position from left sides means in 0101 from right we take 1 as 0 index, 0 as 1 index, 1 as 2 index and lastly 0 as 3 index.
so we will left shift 1 by i (1<<i) which in this case will give 0100
coz 1 in binary in 0001 and left shifting it by i=2 then it makes (1<<i=0100) 
(we do this because if we left shift the 1 by i position and take then & of n and resulting number after left shift will fetch us the bit at given position)
then we will take & of n and (1<<i) 
and if it gives 0 then it means the bit at that position is 0 and if it gives 1 it means bit at that position is 1 coz 1&1=1.

left shift means shifting a number to left by the no. of times mentioned
like a<<n means shifting a number to left by n times.

we do & here coz we need to verify whether bit is 1 or not at guven position.
*/