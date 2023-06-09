// 13
// https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_8230773?challengeSlug=striver-sde-challenge&leftPanelTab=0

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size(), m = mat[0].size();
    int low = 0, high = (n * m) - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(mat[mid / m][mid % m] == target) return true;
        else if(mat[mid / m][mid % m] < target) low = mid + 1;
        else high = mid - 1; 
    }
    return false;
}