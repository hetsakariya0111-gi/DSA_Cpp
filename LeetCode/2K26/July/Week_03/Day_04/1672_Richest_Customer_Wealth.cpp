#include <bits/stdc++.h>
using namespace std;

/*
==================================================

LeetCode : 1672. Richest Customer Wealth

Topic       : Array, Matrix
Difficulty  : Easy

Approach    : Brute Force

Time Complexity  : O(m × n)
Space Complexity : O(1)

Solved On : 16-07-2026

Revision
---------
[ ] Better Approach
[ ] Optimal Approach

Pattern:
2D Array Traversal

==================================================
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int maxi = 0;

        for (int i = 0; i < accounts.size(); i++) {

            int sum = 0;

            for (int j = 0; j < accounts[i].size(); j++) {

                sum += accounts[i][j];
            }

            maxi = max(maxi, sum);
        }

        return maxi;
    }
};