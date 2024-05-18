//*QUES- 
//! you have 15 rs. 1 chocolate is of 1rs and you can have 1 free chocolate from 3 wrappers. 
//! you have to tell how many max chocolates can u have in 15rs...?

#include<iostream>
using namespace std;
int main(){
    int rup;
    cin>>rup;
    int choco=0,wrap=0;
    for(int i=1;i<=rup;i++){
        choco+=1;
        wrap+=1;
        if(wrap%3==0){
            choco+=1;
            wrap=1;
        }
    }
    cout<<choco<<endl;
    return 0;
}