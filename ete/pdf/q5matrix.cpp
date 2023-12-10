#include<iostream>
#define max 100
using namespace std;
void mm(int mat1[max][max],int r1,int c1,int mat2[max][max],int r2,int c2,int result[max][max]){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            result[i][j]=0;
            for(int k=0;k<c1;k++){                               //k<r2
                result[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
}
int main(){
    int r1,c1;
    cin>>r1>>c1;
    int mat1[max][max];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>mat1[i][j];
        }
    }
    int r2,c2;
    cin>>r2>>c2;
    int mat2[max][max];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>mat2[i][j];
        }
    }
    int result[max][max];
    if(c1!=r2){
        cout<<"matrix multiplication not possible"<<endl;
    }
    else{
        mm(mat1,r1,c1,mat2,r2,c2,result);
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}