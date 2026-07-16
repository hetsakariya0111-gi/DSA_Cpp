#include <bits/stdc++.h>
using namespace std;

/*
==================================================

LeetCode : 1480. Running Sum of 1d Array

Topic       : Array
Difficulty  : Easy

Approach    : Brute Force

Time Complexity  : O(n²)
Space Complexity : O(n)

Solved On : 16-07-2026

Revision
---------
[ ] Better Approach
[ ] Optimal Approach

Pattern:
Prefix Sum

==================================================
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {

            int sum = 0;

            for (int j = 0; j <= i; j++) {
                sum += nums[j];
            }

            ans.push_back(sum);
        }

        return ans;
    }
};