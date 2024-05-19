/**
 * @file c_13042DArrays.c
  2D array -> row and columns
 * 
 */

 #include <stdio.h>

 int main(){
     int matrix[3][3];// {{1,2,3},{4,5,6},{7,8,9}}
    // insert data in an array
    printf("please enter the data for 3x3 matrix");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d", &matrix[i][j]);
            //1    2    3    4    5    6    7    8    9
        }
    }

    // read the data from 2d matrix:
    matrix[0][2] = 300;// update
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%5d", matrix[i][j]);
            //1    2    3    4    5    6    7    8    9
        }
    }
 }