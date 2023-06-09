// 12
// Problem Link: https://www.codingninjas.com/codestudio/problems/count-inversions_8230680?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h> 
long long merge(long long *arr, int low, int mid, int high) {
    long long inversions = 0;
    vector<int> temp;
    int left = low;      
    int right = mid + 1; 

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            inversions += mid - left + 1;
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

    return inversions;
}

long long mergeSort(long long *arr, int low, int high) {
    long long inversions = 0;
    if (low >= high) return 0;
    int mid = (low + high) / 2 ;
    inversions += mergeSort(arr, low, mid);
    inversions += mergeSort(arr, mid + 1, high);
    inversions += merge(arr, low, mid, high); 

    return inversions; 
}

long long getInversions(long long *arr, int n){
    return mergeSort(arr, 0, n - 1);
}