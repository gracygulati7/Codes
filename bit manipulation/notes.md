1 is true and 0 is false here. <br>

there are 4 main concepts in bit manipulation - <br>
1. getbit - `& of n and (1<<position)!=0` <br>
2. setbit - `| of n and (1<<position)` <br>
3. clearbit - `& of n and ~(1<<position)` <br>
4. udpatebit - clear bit + set bit <br>
-> `& of n and ~(1<<position)` <br>
-> store the result in n only <br>
-> `| of n and (value<<position)` <br>
(value is the value by which the bit is to be updated) <br>

if there is are 2 numbers n and n-1 so we can also notice a pattern in them ie in n binary representation we need to find the rightmost 1 bit and if we flip that rightmost 1 bit and bits after that then we will obtain binary representation of n-1 num <br>
for eg n=8 (1000) and n-1=7(0111) <br>
so in n rightmost 1 bit is at position 3 from right side so if we flip it and bits after that we will get 0111 which is same as binary representationof n-1 ie 7. <br>
so if we take & of n and n-1 so there will be only 1 bit difference btw n and result of & of both num and difference will be at rightmost set bit because we flipped it earlier <br>
( n & n-1 ) has same bits as n except the rightmost set bit <br>.