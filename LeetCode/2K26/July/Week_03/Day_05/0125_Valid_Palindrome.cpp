#include <bits/stdc++.h>
using namespace std;

/*
==================================================

LeetCode : 125. Valid Palindrome

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
String Processing

==================================================
*/

class Solution {
public:
    bool isPalindrome(string s) {

        string temp = "";

        for (char ch : s) {

            if (isalnum(ch)) {
                temp += tolower(ch);
            }
        }

        string rev = temp;
        reverse(rev.begin(), rev.end());

        return temp == rev;
    }
};