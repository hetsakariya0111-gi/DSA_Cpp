#include <bits/stdc++.h>
using namespace std;

/*
==================================================

LeetCode : 27. Remove Element

Topic       : Array
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
Array Filtering

==================================================
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        vector<int> temp;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != val) {
                temp.push_back(nums[i]);
            }

        }

        for (int i = 0; i < temp.size(); i++) {
            nums[i] = temp[i];
        }

        return temp.size();
    }
};