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
    for (int i=0;i<rows;i++){
        for (int j=0;j<columns;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    // print 2*value
    for (int i=0;i<rows;i++){
        for (int j=0;j<columns;j++){
            printf("%d ",2*matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}