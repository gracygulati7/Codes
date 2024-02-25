//! sudoku 
//*rules- big 9*9 ki grid numbers btw 1-9, 
//* there are also 9 small 3*3 grids in sudoku
//* if a number is placed anywhere then that number cannot be placed in same row or 
//* same col of 9*9 grid and that no. cant also be placed again in that 3*3 grid that its been already placed into.
//* problems like N queens
//* only one possible solution code

//? Approach:
//? 1. mai ek ek krke cell ko bhadhate jari hu row=1
//? 2.  at last cell of row=1 ab mujhe row=2 pe jana hai
//? 3. now at last cell at ro=2 we will now move to row=3
//? 4. mai ek row fix krke cols bdhate jari hu till last col of a row and then after last col cell of a particular row mai next row pe shift krti hu
//?5. har cell pr jake i have to check 
//? for(int i=0 to 9) place number?
//? issafe to place num?
//? if yes then place then call for next cell
//? kya next cell pe sudoku k no. ko place kr pa rhi hu
//? if yes then solution found

#include<iostream>
using namespace std;
int main(){
    
    return 0;
}