// 7
// Problem Link: https://www.codingninjas.com/codestudio/problems/rotate-matrix_8230774?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>
void rotateMatrix(vector<vector<int>> &mat, int n, int m) {
    int startingRow = 0, endingRow = n - 1, startingCol = 0, endingCol = m - 1;
    while(startingRow < endingRow && startingCol < endingCol) {
        int temp = mat[startingCol][startingRow];

        for(int index = startingRow; index < endingRow; index++) {
            mat[index][startingCol] = mat[index + 1][startingCol];
        }
        
        for(int index = startingCol; index < endingCol; index++) {
            mat[endingRow][index] = mat[endingRow][index + 1];
        }

        for(int index = endingRow; index > startingRow; index--) {
            mat[index][endingCol] = mat[index - 1][endingCol];
        }

        for(int index = endingCol; index > startingCol + 1; index--) {
            mat[startingRow][index] = mat[startingRow][index - 1];
        }
        mat[startingRow][startingCol + 1] = temp;
        startingRow++, endingRow--, startingCol++, endingCol--;
    }
}