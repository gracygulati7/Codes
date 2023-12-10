#include<iostream>
#include<climits>
#define max 100
using namespace std;
int colsum(int mat[max][max],int n){
    int index=-1;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=mat[i][j];
        }
        if(sum>maxsum){
            sum=maxsum;
            index=i;
        }
    }
    return index+1;
}
int main(){
    int n;
    cin>>n;
    int mat[max][max];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int maxsumcolindex= colsum(mat,n);
    cout<<"column with max sum is: "<<maxsumcolindex<<endl;
    return 0;
}