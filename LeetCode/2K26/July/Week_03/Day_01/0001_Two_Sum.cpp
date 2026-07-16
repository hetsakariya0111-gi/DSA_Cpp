/*
==================================================

LeetCode : 1. Two Sum

Topic       : Array, HashMap
Difficulty  : Easy

Approach    : Brute Force

Time Complexity  : O(n^2)
Space Complexity : O(1)

Solved On : 12-07-2026

Revision
---------
[ ] Rev 1
[ ] Rev 2
[ ] Rev 3

Pattern:
Finding Pair with Target Sum

==================================================
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Brute Force Approach

        for(int i = 0; i < nums.size(); i++) {

            for(int j = i + 1; j < nums.size(); j++) {

                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }

            }
        }

        return {};
    }
};