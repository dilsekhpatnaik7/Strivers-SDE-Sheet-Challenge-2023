// 14
// Problem Link: https://www.codingninjas.com/codestudio/problems/modular-exponentiation_8230803?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>
int modularExponentiation(int x, int n, int m) {
	int result = 1;
    while(n > 0){
        if(n & 1){
            result = (1LL * result * (x) % m ) % m;
        }
        x = (1LL * (x) % m * (x) % m ) % m;
        n = n >> 1;
    }
    return result;
}