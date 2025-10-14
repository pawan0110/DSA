// Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window.
// If there is no such substring, return the empty string "".

// The testcases will be generated such that the answer is unique.

 

// Example 1:

// Input: s = "ADOBECODEBANC", t = "ABC"
// Output: "BANC"
// Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
// Example 2:

// Input: s = "a", t = "a"
// Output: "a"
// Explanation: The entire string s is the minimum window.
// Example 3:

// Input: s = "a", t = "aa"
// Output: ""
// Explanation: Both 'a's from t must be included in the window.
// Since the largest window of s only has one 'a', return empty string.
 

// Constraints:

// m == s.length
// n == t.length
// 1 <= m, n <= 105
// s and t consist of uppercase and lowercase English letters.
 

// Follow up: Could you find an algorithm that runs in O(m + n) time?

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
       if(t.size()>s.size()) return "";

       unordered_map<char, int> freqT;
       for(char c : t) freqT[c]++;

       unordered_map<char, int> window;
       int have=0, need=freqT.size();
       int resLen = INT_MAX;
       int left = 0;
       int resStart=0;

       for(int right =0; right<s.size(); right++){
        char c = s[right];
        window[c]++;

        if(freqT.count(c) && window[c] == freqT[c]) have++;
        while(have == need){
            if((right-left+1) < resLen) {
                resLen = right-left+1;
                resStart = left;
            }
            char leftchar = s[left];
            window[leftchar]--;
            if(freqT.count(leftchar) && window[leftchar] < freqT[leftchar])
             have--;
            left++;

        }
       }

        
        return resLen == INT_MAX ? "" : s.substr(resStart, resLen);
    }
};

// 🕒 Complexity

// Time: O(n + m), where n = len(s), m = len(t)
// Each character visited at most twice (expand + contract)
// Space: O(n + m), for hash maps