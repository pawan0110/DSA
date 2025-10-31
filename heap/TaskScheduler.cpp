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