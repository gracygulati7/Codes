/*#include<iostream>
using namespace std;
void helper(int n,int x){
    if(x>n){
        return;
    }
    cout<<x<<endl;
    for(int i=0;i<=9;i++){
        helper(n,x*10+i);
    }
}
int main(){
   int n;
   cin>>n;
   for(int i=1;i<=9;i++){
    helper(n,i);
   } 
   return 0;
}*/


#include<iostream>
using namespace std;
void helper(int n,int x){
    if(x>n){
        return;
    }
    cout<<x<<endl;
    for(int i=0;i<=9;i++){
        helper(n,x*10+i);
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=9;i++){
        helper(n,i);
    }
    return 0;
}