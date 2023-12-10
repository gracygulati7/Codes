#include<iostream>
using namespace std;
void towerofhanoi(int n,char source,char auxiliary,char target){
    if(n==1){
    cout<<"moving ring 1 from "<<source<<" to "<<target<<endl;
    return;
    }
    towerofhanoi(n-1,source,auxiliary,target);
    cout<<"moving ring "<<n<<" from "<<source<<" to "<<target<<endl;
    towerofhanoi(n-1,source,auxiliary,target);
}
int main(){
    int n;
    cin>>n;
    towerofhanoi(n,'A','C','B');
    return 0;
}