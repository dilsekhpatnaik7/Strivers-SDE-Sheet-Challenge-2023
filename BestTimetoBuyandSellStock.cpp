// 6
// Problem Link: https://www.codingninjas.com/codestudio/problems/best-time-to-buy-and-sell-stock_8230746?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int buy = INT_MAX, sell = INT_MIN;
    for(int i = 0; i < prices.size(); i++) {
        buy = min(buy, prices[i]);
        sell = max(sell, prices[i] - buy);
    }
    return (sell > 0) ? sell : 0;
}