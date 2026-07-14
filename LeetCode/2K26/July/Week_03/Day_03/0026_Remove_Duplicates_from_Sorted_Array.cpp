#include <bits/stdc++.h>
using namespace std;

/*
==================================================

LeetCode : 26. Remove Duplicates from Sorted Array

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
Remove Duplicates

==================================================
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        vector<int> temp;

        temp.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] != temp.back()) {
                temp.push_back(nums[i]);
            }

        }

        for (int i = 0; i < temp.size(); i++) {
            nums[i] = temp[i];
        }

        return temp.size();
    }
};