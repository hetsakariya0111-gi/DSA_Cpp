#include <bits/stdc++.h>
using namespace std;

/*
==================================================

LeetCode : 917. Reverse Only Letters

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
String Manipulation

==================================================
*/

class Solution {
public:
    string reverseOnlyLetters(string s) {

        string letters = "";

        for (char ch : s) {
            if (isalpha(ch)) {
                letters += ch;
            }
        }

        reverse(letters.begin(), letters.end());

        int index = 0;

        for (int i = 0; i < s.size(); i++) {

            if (isalpha(s[i])) {
                s[i] = letters[index++];
            }
        }

        return s;
    }
};