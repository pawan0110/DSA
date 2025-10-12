// Longest Substring With At Most K Distinct Characters

// Given a string s and an integer k.Find the length of the longest substring with at most k distinct characters.

// Examples:
// Input : s = "aababbcaacc" , k = 2

// Output : 6

// Explanation : The longest substring with at most two distinct characters is "aababb".

// The length of the string 6.

// Input : s = "abcddefg" , k = 3

// Output : 4

// Explanation : The longest substring with at most three distinct characters is "bcdd".

// The length of the string 4.

// Input : s = "abccab" , k = 4

#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int kDistinctChar(string& s, int k) {
//         //your code goes here
//         unordered_map<char,int>freq;
//         int n = s.length();
//         int left = 0;
//         int maxLen = 0;

//         for(int right=0; right<n; right++ ){
//             freq[s[right]]++;

//            while(freq.size()>k){
//             freq[s[left]]--;
//             if(freq[s[left]] == 0){
//                 freq.erase(s[left]);
//             }
//              left++;
//            }
//            maxLen = max(maxLen, right-left+1);
//         }
//         return maxLen;
//     }
// };
// tc = o(n)
// sc=0(k)
class Solution
{
public:
    int kDistinctChar(string &s, int k)
    {
        // your code goes here
        vector<int> freq(26, 0);
        int n = s.length();
        int left = 0;
        int maxLen = 0;
        int dist = 0;

        for (int right = 0; right < n; right++)
        {
            if (freq[s[right] - 'a'] == 0)
                dist++;
            freq[s[right - 'a']]++;

            while (dist > k)
            {
                freq[s[left] - 'a']--;
                if (freq[s[right] - 'a'] == 0)
                {
                    dist--;
                }
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
// tc = o(n)
// sc=0(1)