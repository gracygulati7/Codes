#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;                 //n-> number of rows
	int a[100][100];               //m-> number of columns
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	int sr = 0, er = n-1, sc = 0, ec = m-1;
	while(sr<=er and sc<=ec){   
		// step1: print first row (in reverse)
		for(int col=ec;col>=sc;col--){
			cout << a[sr][col] << ", ";
		}
		sr++;

		// step2: print starting column
		for(int row=sr;row<=er;row++){
			cout << a[row][sc] << ", ";
		}
		sc++;;
        if(sr<=er){
		// step3: print ending row 
			for(int col=sc;col<=ec;col++){
				cout << a[er][col] << ", ";
			}}
			er--;
        if(sc<=ec){
		// step4: print starting column
			for(int row=er;row>=sr;row--){
				cout << a[row][ec] << ", ";
			}
			ec--;
		}}
        return 0;
	}

	