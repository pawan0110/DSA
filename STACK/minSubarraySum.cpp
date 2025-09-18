#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
      const int MOD = 1e9+7;
      int n = arr.size();
      long long ans = 0;
      for(int i=0; i<n; i++){
        int mn = arr[i];
        for(int j=i; j<n; j++){
            mn = min(mn,arr[j]);
            ans += mn;
            ans %= MOD;
        }
      }  
      return (int)ans;
    }
};
// tc =o(n^2)
//sc = o(1)