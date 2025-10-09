#include<bits/stdc++.h>
using namespace std;

 int characterReplacement(string s, int k) {
    int n=s.length();
    int maxLen=0;

    for(int i=0; i<n; i++){
        vector<int> freq(26,0);
        int maxCount = 0;
        for(int j=i; j<n; j++){
            freq[s[j]-'A']++;
            maxCount = max(maxCount, freq[s[j]-'A']);

            int window = j-i+1;
            if(window-maxCount <=k){
                maxLen = max(maxLen, window);
            } else {
                break;
            }
        }
    }
    return maxLen;
 }
 //tc = o(n*2)
 //sc = o(1)