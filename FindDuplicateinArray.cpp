// 10
// Problem Link: https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_8230816?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr, int n){
	int slow = arr[0], fast = arr[0];
	do {
		slow = arr[slow];
		fast = arr[arr[fast]];
	} while(slow != fast);

	fast = arr[0];
	while(slow != fast) {
		slow = arr[slow];
		fast = arr[fast];
	}
	return slow;
}
