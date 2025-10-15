#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s1, string s2) {
        // User code goes here
        int m = s1.size(), n =s2.size();
        int minLen = INT_MAX;
        string res  = "";
        int i = 0;

        while(i<m) {
            int j =0;
            while(i<m){
                if(s1[i]==s2[j]){
                    j++;
                    if(j==n) break;
                }
                i++;
            }
            if(i==m) break;
            int end = i;
            j =n-1;
            while(i>=0){
                if(s1[1]==s2[j]){
                    j--;
                    if(j<0) break;
                }
                i--;
            }
            int start = i;
            if(end-start+1 < minLen){
                minLen=end-start+1;
                res = s1.substr(start, minLen);
            }
            i = start+1;
        }
        return res;
    }
};

// ⏱️ Time Complexity

// O(m × n) worst case (but faster in practice since we skip early)

// O(1) space (no extra data structures)
