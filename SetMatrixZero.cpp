#include <stdio.h>
#include<vector>
using namespace std;
//Given an NxM integer matrix,if an elementis 0,set it's entire row and column to 0's,and 
//return the matrix.In particular,your Task is to modify it in such a way tha if a cell has a value 0(matrix[i][j]==0)
//then all the cells of the ith row and jth column should be changed to 0
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int rows = matrix.size(); // Number of rows in the matrix
    int cols = matrix[0].size();
	//Create row and column of element of 0
	vector<bool> rowZero(rows, false);
    vector<bool> colZero(cols, false);

    // Traverse the matrix and mark the rows and columns that contain zero
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                rowZero[i] = true;
                colZero[j] = true;
            }
        }
    }
	// Set the rows with zero elements to zero
    for (int i = 0; i < rows; i++) {
        if (rowZero[i]) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set the columns with zero elements to zero
    for (int j = 0; j < cols; j++) {
        if (colZero[j]) {
            for (int i = 0; i < rows; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}