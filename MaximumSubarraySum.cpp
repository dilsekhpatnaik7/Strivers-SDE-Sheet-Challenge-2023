// Problem Link: https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_8230694?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n) {
    if(n == 0) return 0;
    long long currentSum = arr[0], maximumSum = INT_MIN;
    for(int i = 1; i < n; i++) {
        currentSum += arr[i];
        maximumSum = max(currentSum, maximumSum);
        if(currentSum < 0) currentSum = 0;
        if(maximumSum < 0) maximumSum = 0;
    }
    return maximumSum;
}