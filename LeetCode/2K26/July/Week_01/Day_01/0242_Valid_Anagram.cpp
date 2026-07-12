/*
==================================================

LeetCode : 242. Valid Anagram

Topic       : String, HashMap
Difficulty  : Easy

Approach    : Frequency Count

Time Complexity  : O(n)
Space Complexity : O(1)

Solved On : 12-07-2026

Revision
---------
[ ] Rev 1
[ ] Rev 2
[ ] Rev 3

Pattern:
Character Frequency Counting

==================================================
*/

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) {
            return false;
        }


        vector<int> freq(26,0);


        for(char ch : s) {
            freq[ch - 'a']++;
        }


        for(char ch : t) {
            freq[ch - 'a']--;
        }


        for(int count : freq) {

            if(count != 0) {
                return false;
            }

        }


        return true;
    }
};