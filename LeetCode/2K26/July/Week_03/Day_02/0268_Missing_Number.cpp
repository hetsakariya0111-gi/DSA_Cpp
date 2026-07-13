#include <bits/stdc++.h>
using namespace std;

/*
==================================================

LeetCode : 268. Missing Number

Topic       : Array
Difficulty  : Easy

Approach    : Brute Force

Time Complexity  : O(n²)
Space Complexity : O(1)

Solved On : 13-07-2026

Revision
---------
[ ] Rev 1
[ ] Rev 2
[ ] Rev 3

Pattern:
Linear Search

==================================================
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        for (int i = 0; i <= nums.size(); i++) {

            bool found = false;

            for (int j = 0; j < nums.size(); j++) {

                if (nums[j] == i) {
                    found = true;
                    break;
                }

            }

            if (!found)
                return i;
        }

        return -1;
    }
};