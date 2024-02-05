#include<iostream>
#define max 100
using namespace std;
void mm(int m1[max][max],int m2[max][max],int rm[max][max],int r1,int r2,int c1, int c2){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            rm[i][j]=0;
            for(int k=0;k<c1;k++){                 // or k<r2
                rm[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
}
int main(){
    int r1,c1,r2,c2;
    cout<<"enter rows and columns of matrix 1: "<<" ";
    cin>>r1>>c1;
    cout<<"enter rows and columns of matrix 2: "<<" ";
    cin>>r2>>c2;
    int m1[max][max];
    int m2[max][max];   
    int rm[max][max];
    cout<<"enter elements of matrix 1: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"enter elements of matrix 2: "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>m2[i][j];
        }
    }
    if(r2!=c1){
        cout<<"ERROR"<<endl;
    }
    else{
        mm(m1,m2,rm,r1,r2,c1,c2);
        cout<<"output matrix is: "<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<rm[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}