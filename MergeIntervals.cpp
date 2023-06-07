// 8
// Problem Link: https://www.codingninjas.com/codestudio/problems/merge-intervals_8230700?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h> 
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals) {
    vector<vector<int>> ans;
    if(intervals.size() == 0) return ans;
    sort(intervals.begin(), intervals.end());
    int start = intervals[0][0], end = intervals[0][1], n = intervals.size();
    for(int i = 1; i < n; i++) {
        if(intervals[i][0] <= end) end = max(end, intervals[i][1]);
        else {
            ans.push_back({start, end});
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }
    ans.push_back({start, end});
    return ans;
}
