#include<iostream>
using namespace std;
int numofones(int n){
    int count=0;
    while(n!=0){
        n = (n&n-1);
        count++;
    }
    return count;
}
int main(){
    numofones(19);
    return 0;
}
