#include<iostream>
#define max 100
using namespace std;
void add(int mat1[max][max],int mat2[max][max],int result[max][max],int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            result[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int mat1[max][max];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat1[i][j];
        }
    }
    int mat2[max][max];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat2[i][j];
        }
    }
    int result[max][max]={0};
    add(mat1,mat2,result,m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}