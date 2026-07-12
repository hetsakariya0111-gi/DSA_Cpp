/*
==================================================

LeetCode : 217. Contains Duplicate

Topic       : Array, HashSet
Difficulty  : Easy

Approach    : Sorting

Time Complexity  : O(n log n)
Space Complexity : O(1)

Solved On : 12-07-2026

Revision
---------
[ ] Rev 1
[ ] Rev 2
[ ] Rev 3

Pattern:
Duplicate Detection

==================================================
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // Brute Force:
        // Compare every element with others
        // O(n^2)


        // Better Approach:
        // Sort array and check adjacent elements

        sort(nums.begin(), nums.end());


        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == nums[i-1]) {
                return true;
            }

        }

        return false;
    }
};