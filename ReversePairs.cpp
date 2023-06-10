// 18
// Problem Link: https://www.codingninjas.com/codestudio/problems/reverse-pairs_8230825?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h> 
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;      
    int right = mid + 1; 

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

long long countPairs(vector<int> &arr, int low, int mid, int high) {
	long long pairs = 0;
	int j = mid + 1;
	for (int i = low; i <= mid; i++) {
		while (j <= high && arr[i] > 2LL * arr[j]) {
			j++;
		}
		pairs += (j - (mid + 1));
  	}
	return pairs;
}

long long mergeSort(vector<int> &arr, int low, int high) {
    long long pairs = 0;
    if (low >= high) return 0;
    int mid = (low + high) / 2 ;
    pairs += mergeSort(arr, low, mid);
	pairs += mergeSort(arr, mid + 1, high);
	pairs += countPairs(arr, low, mid, high);
    merge(arr, low, mid, high); 
    return pairs; 
}

int reversePairs(vector<int> &arr, int n) {
	return mergeSort(arr, 0, n - 1);
}