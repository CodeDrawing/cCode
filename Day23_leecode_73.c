#include <stdio.h>
void setZeroes(int** matrix, int matrixSize, int* matrixColSize){
    int row[matrixSize];
    int col[*matrixColSize];
    for (int i = 0; i < matrixSize; ++i) {
        for (int j = 0; j < matrixColSize; ++j) {
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for (int i = 0; i < matrixSize; ++i) {
        for (int j = 0; j < matrixColSize; ++j) {
            if(row[i]==1){
                matrix[i][j]=0;
            }
            if(col[j]==1){
                matrix[i][j]=0;
            }
        }
    }
}
int main(){

}

