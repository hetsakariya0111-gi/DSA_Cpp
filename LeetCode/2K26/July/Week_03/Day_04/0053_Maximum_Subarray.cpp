#include <bits/stdc++.h>
using namespace std;

/*
==================================================

LeetCode : 53. Maximum Subarray

Topic       : Array
Difficulty  : Medium

Approach    : Brute Force

Time Complexity  : O(n²)
Space Complexity : O(1)

Solved On : 16-07-2026

Revision
---------
[ ] Better Approach
[ ] Optimal Approach (Kadane's Algorithm)

Pattern:
Subarray

==================================================
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxi = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {

            int sum = 0;

            for (int j = i; j < nums.size(); j++) {

                sum += nums[j];

                maxi = max(maxi, sum);
            }
        }

        return maxi;
    }
};