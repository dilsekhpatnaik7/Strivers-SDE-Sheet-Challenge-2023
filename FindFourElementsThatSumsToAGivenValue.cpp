// 20
// Problem Link: https://www.codingninjas.com/codestudio/problems/find-four-elements-that-sums-to-a-given-value_8230785?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>
string fourSum(vector<int> nums, int target, int n) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for(int i = 0; i < n - 3; i++) {
        for(int j = i + 1; j < n - 2; j++) {
            int low = j + 1, high = n - 1;
            long long sum3 = (long long)target - (long long)nums[i] - (long long)nums[j];
            while(low < high) {
                if(nums[low] + nums[high] < sum3) low++;
                else if(nums[low] + nums[high] > sum3) high--;
                else if(nums[low] + nums[high] == sum3) {
                    ans.push_back({nums[i], nums[j], nums[low], nums[high]});
                    
                    while(low < high && nums[low] == nums[low + 1]) low++;
                    while(low < high && nums[high] == nums[high - 1]) high--;
                    low++;
                    high--;

                }
            }
            while(j + 1 < n - 2 && nums[j + 1] == nums[j]) ++j;;
        }
        while(i + 1 < n - 3 && nums[i + 1] == nums[i]) ++i;
    }
    return ans.size() > 0 ? "Yes" : "No";
}
