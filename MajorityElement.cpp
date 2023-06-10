// 15
// Problem Link: https://www.codingninjas.com/codestudio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n) {
	int candidate = 0, count = 0;
	for(int i = 0; i < n; i++) {
		if(count == 0) candidate = arr[i];
		if(candidate == arr[i]) count++;
		else count--;
	}
	count = 0;
	for(int i = 0; i < n; i++) {
		if(candidate == arr[i]) count++;
	}
	return count > n /2 ? candidate : -1;
}