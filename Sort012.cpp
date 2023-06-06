// 5
// Problem Link: https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h> 
void sort012(int *arr, int n) {
   int t, low = 0, mid = 0, high = n - 1;
   while(mid <= high) {
      t = arr[mid];
      if(t == 0) swap(arr[low++], arr[mid++]);
      else if(t == 1) mid++;
      else if(t == 2) swap(arr[mid], arr[high--]);
   }
}