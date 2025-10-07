#include <bits/stdc++.h>
using namespace std;
// class Solution
// {
// public:
//     int lengthOfLongestSubstring(string s)
//     {
//         int maxAns = INT_MIN;
//         for (int i = 0; i < s.length(); i++)
//         {
//             unordered_set<char> set;
//             for (int j = i; j < s.length(); j++)
//             {
//                 if (set.find(s[j]) != set.end())
//                 {
//                     maxAns = max(maxAns, j - i);
//                     break;
//                 }
//                 set.insert(s[j]);
//             }
//             maxAns = max(maxAns, (int)set.size());
//         }
//         return (maxAns == INT_MIN) ? 0 : maxAns;
//     }
// };
// tc = 0(n*2)
//  sc = 0(n)

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> mp;
        int left = 0;
        int maxlen = 0;

        for (int right = 0; right < s.length(); right++)
        {
            if (mp.find(s[right]) != mp.end())
            {
                left = max(left, mp[s[right]] + 1);
            }
            mp[s[right]] = right;
            maxlen=(maxlen, right - left + 1);
            return maxlen;
        }
    }
};
// tc = 0(n)
// sc = 0(k) => number of distint character (128 for ascii)