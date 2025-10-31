#include<bits/stdc++.h>
using namespace std;

int LeastInterval(vector<char>& tasks, int n) {
    vector<int>freq(26,0);

    for(char t : tasks){
        freq[t-'A']++;
    }

    int maxFreq = *max_element(freq.begin(),freq.end());
    int countMax = count(freq.begin(),freq.end(),maxFreq);

    int partCount = (maxFreq-1)*(n+1) + countMax;

    return max((int) tasks.size(),partCount);

}
// time = o(26+n) = o(1)
// space = 0(1)



// class Solution {
// public:
//     int leastInterval(vector<char>& tasks, int n) {
//         vector<int>freq(26,0);
//         for(char t : tasks)
//          freq[t-'A']++;
        
//         sort(freq.begin(),freq.end(),greater<int>());

//         int maxFreq = freq[0];
//         int idleSlots = (maxFreq-1)*n;

//         for(int i=1; i<26 && freq[i]>0; i++){
//             idleSlots -= min(freq[i],maxFreq-1);
//         }

//         if(idleSlots < 0 ) idleSlots = 0;
//         return tasks.size() + idleSlots;
//     }
// };

// ⏱️ Complexity

// Time	O(26 log 26) ≈ O(1)	Sorting 26 letters
// Space	O(1)	Constant frequency array