#include<stdio.h>
int main(){
    int rows;
    int columns;
    scanf("%d",&rows);
    scanf("%d",&columns);
    int matrix[rows][columns];
    for (int i=0;i<rows;i++){
        for (int j=0;j<columns;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
int temp[rows][columns];
for(int i=0;i<rows;i=i+1){
    for(int j=0;j<columns;j=j+1){
        if (j==0 && i==0)
        temp[i][columns-1]=matrix[i][0];
        if(j==columns-1 && i==rows-1) temp[i][0]=matrix[i][j];
    }
}

for(int i=0;i<rows;i=i+1){
    for(int j=0;j<columns;j=j+1){
        if (j==0 && i==0)
        matrix[i][0]=temp[i][columns-1];
        if(j==columns-1 && i==rows-1 ) matrix[i][j]=temp[i][0];
    }
}
    for (int i=0;i<rows;i++){
        for (int j=0;j<columns;j++){
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}