// Problem Link: https://www.codingninjas.com/codestudio/problems/next-permutation_8230741?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n) {
    int index = -1;
    for(int i = n - 2; i >= 0; i--) {
        if(permutation[i] < permutation[i + 1]) {
            index = i;
            break;
        }
    }
    if(index == -1) {
        sort(permutation.begin(), permutation.end());
        return permutation;
    }
    else {
        int nextGreaterIndex = index;
        for(int i = n - 1; i >= 0; i--) {
            if(permutation[i] > permutation[nextGreaterIndex]) {
                nextGreaterIndex = i;
                break;
            }
        }
        swap(permutation[index], permutation[nextGreaterIndex]);
        reverse(permutation.begin() + index + 1, permutation.end());
        return permutation;
    }
}