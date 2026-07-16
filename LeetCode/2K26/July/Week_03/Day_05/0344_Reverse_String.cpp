#include <bits/stdc++.h>
using namespace std;

/*
==================================================

LeetCode : 344. Reverse String

Topic       : String, Two Pointers
Difficulty  : Easy

Approach    : Brute Force

Time Complexity  : O(n)
Space Complexity : O(n)

Solved On : 16-07-2026

Revision
---------
[ ] Better Approach
[ ] Optimal Approach

Pattern:
String Reversal

==================================================
*/

class Solution {
public:
    void reverseString(vector<char>& s) {

        vector<char> temp;

        for (int i = s.size() - 1; i >= 0; i--) {
            temp.push_back(s[i]);
        }

        s = temp;
    }
};