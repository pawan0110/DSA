#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int n = cardPoints.size();
//         int totalSum = 0;

//         for(int x:cardPoints) totalSum +=x;

//         if(k==n) return totalSum;

//         int windowSize = n-k;
//         int curSum=0;

//         for(int i=0; i<windowSize; i++)
//         {
//             curSum += cardPoints[i];
//         }
//         int minSubSum = curSum;

//         for(int i=windowSize; i<n; i++){
//             curSum +=cardPoints[i] - cardPoints[i-windowSize];
//             minSubSum = min(minSubSum, curSum);
//         }
//         return totalSum-minSubSum;
//     }
// };
// // tc = 0(n)
// sc = 0(1)

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        
        
        int frontSum = 0;
        for (int i = 0; i < k; i++)
            frontSum += cardPoints[i];
        
        int maxScore = frontSum;
        int backSum = 0;
        
        
        for (int i = 0; i < k; i++) {
            frontSum -= cardPoints[k - 1 - i];
            backSum += cardPoints[n - 1 - i];
            maxScore = max(maxScore, frontSum + backSum);
        }
        
        return maxScore;
    }
};
// // tc = 0(k)
// sc = 0(1)