#include<iostream>
#define max 100
using namespace std;
void multi(int mat1[max][max],int mat2[max][max],int result[max][max],int r1, int c2,int c1){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            result[i][j]=0;
            for(int k=0;k<c1;k++){
                result[i][j]+=mat1[i][k]+mat2[k][j];
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
    int result[max][max]={0};
    if(c1!=r2){
        cout<<"not applicable for multiplication"<<endl;
    }
    multi(mat1,mat2,result,r1,c2,c1);
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}