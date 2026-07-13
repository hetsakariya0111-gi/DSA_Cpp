#include <bits/stdc++.h>
using namespace std;

/*
==================================================

LeetCode : 136. Single Number

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
Frequency Counting

==================================================
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++) {

            int count = 0;

            for (int j = 0; j < nums.size(); j++) {

                if (nums[i] == nums[j]) {
                    count++;
                }

            }

            if (count == 1)
                return nums[i];
        }

        return -1;
    }
};