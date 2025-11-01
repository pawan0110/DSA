#include<bits/stdc++.h>
using namespace std;

bool isNStraightHand(vector<int>& hand, int groupSize) {
    if (hand.size() % groupSize != 0) return false;

    map<int,int> mp;
    for (auto h : hand) mp[h]++;

    for (auto it = mp.begin(); it != mp.end(); ++it) {
        int h = it->first;
        if (mp[h] > 0) {
            int count = mp[h];
            for (int curr = h; curr < h + groupSize; curr++) {
                if (mp[curr] < count) return false;
                mp[curr] -= count;
            }
        }
    }
    return true;
}


// Operation	Complexity
// Building map	O(n log n)
// Processing groups	O(n × groupSize × log n) (worst), ~O(n log n) average
// Total Time	O(n log n) (average)
// Space	O(n) (for map)