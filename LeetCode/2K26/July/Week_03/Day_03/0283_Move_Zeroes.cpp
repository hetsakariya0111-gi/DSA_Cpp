#include <bits/stdc++.h>
using namespace std;

/*
==================================================

LeetCode : 283. Move Zeroes

Topic       : Array, Two Pointers
Difficulty  : Easy

Approach    : Brute Force (Using Extra Vector)

Time Complexity  : O(n)
Space Complexity : O(n)

Solved On : 14-07-2026

Revision
---------
[ ] Rev 1
[ ] Rev 2
[ ] Rev 3

Pattern:
Array Rearrangement

==================================================
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        vector<int> temp;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }

        }

        while (temp.size() < nums.size()) {
            temp.push_back(0);
        }

        nums = temp;
    }
};