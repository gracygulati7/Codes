#include<iostream>
#define max 100
using namespace std;
int main(){
    int r1,c1;
    cin>>r1>>c1;
    int mat1[max][max];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>mat1[i][j];
        }
    }
    int ele;
    cin>>ele;
    bool found=false;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(ele==mat1[i][j]){
                found=true;
                break;
            }
        }
    }
    if(!found){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
    return 0;
}