// Problem Link: https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge&leftPanelTab=1

#include <bits/stdc++.h>
void setZeros(vector<vector<int>> &matrix) {
	bool row = false, col = false;
	// Setting the Initial Markers
	for(int i = 0; i < matrix.size(); i++) {
		if(matrix[i][0] == 0) col = true;
	}
	for(int i = 0; i < matrix[0].size(); i++) {
		if(matrix[0][i] == 0) row = true;
	}

	// Marking the Markers
	for(int i = 0; i < matrix.size(); i++) {
		for(int j = 0; j < matrix[0].size(); j++) {
			if(matrix[i][j] == 0) {
				matrix[0][j] = matrix[i][0] = 0;
			}
		}
	}

	// Filing the Inner Matrix
	for(int i = 1; i < matrix.size(); i++) {
		for(int j = 1; j < matrix[0].size(); j++) {
			if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
		}
	}
	if(col) {
		for(int i = 0; i < matrix.size(); i++) matrix[i][0] = 0;
	}
	if(row) {
		for(int j = 0; j < matrix[0].size(); j++) matrix[0][j] = 0;
	}
}