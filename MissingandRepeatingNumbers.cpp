// 11
// Problem Link: https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_8230733?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>
pair<int,int> missingAndRepeating(vector<int> &arr, int n) {
    unordered_map<int,int> mp;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
        sum += arr[i];
    }
    int rp;
    for(auto x: mp) {
        if(x.second > 1) {
            rp = x.first;
        }
    }
    int missing = (n * (n + 1) / 2) + rp - sum;
    return {missing, rp};
}