#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int sumSubarrayMins(vector<int>& arr) {
//       const int MOD = 1e9+7;
//       int n = arr.size();
//       long long ans = 0;
//       for(int i=0; i<n; i++){
//         int mn = arr[i];
//         for(int j=i; j<n; j++){
//             mn = min(mn,arr[j]);
//             ans += mn;
//             ans %= MOD;
//         }
//       }  
//       return (int)ans;
//     }
// };
// tc =o(n^2)
//sc = o(1)

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9+7;
        int n = arr.size();
        vector<int> left(n), right(n);
        stack<int> st;

        for(int i=0; i<n; i++){
            int count = 1;
            while(!st.empty() && arr[st.top()]>arr[i]){
                count +=left[st.top()];
                st.pop();
            }
            left[i] = count;
            st.push(i);
        }
        while(!st.empty()) st.pop();

        for(int i=n-1; i>=0; i--){
            int count = 1;
            while(!st.empty() && arr[st.top()]>=arr[i]){
                count +=right[st.top()];
                st.pop();
            }
            right[i] = count;
            st.push(i);
        }
        long long ans = 0;
        for(int i=0; i<n; i++){
            ans = (ans +(long long)arr[i]*left[i]*right[i])%MOD;
        }
        return (int)ans;
    }
};
//tc = o(n)
//sc = o(n)