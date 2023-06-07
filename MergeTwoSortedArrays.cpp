// 9
// Problem Link: https://www.codingninjas.com/codestudio/problems/merge-two-sorted-arrays_8230835?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int k = m + n - 1, i = m - 1, j = n - 1;
	vector<int> ans(m + n);
	while(i >= 0 && j >= 0) {
		if(arr1[i] >= arr2[j]) ans[k--] = arr1[i--];
		else ans[k--] = arr2[j--];
	}
	while(i >= 0) ans[k--] = arr1[i--];
	while(j >= 0) ans[k--] = arr2[j--];
	return ans;
}