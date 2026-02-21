/*You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.*/
void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int left=0,right,temp;
    for(int i=0;i<matrixSize;i++){
        for(int j=i+1;j<matrixSize;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(int i=0;i<matrixSize;i++){
        left=0, right=matrixSize-1;
        while(left<right){
            temp=matrix[i][left];
            matrix[i][left]=matrix[i][right];
            matrix[i][right]=temp;
            left++; right--;
        }
    }  } 
