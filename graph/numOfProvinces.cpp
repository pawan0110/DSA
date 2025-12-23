#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int city,vector<vector<int>>& isConnected,vector<bool> &visited) {
        visited[city] = true;
        for(int j=0; j<isConnected.size(); j++) {
            if(isConnected[city][j]== 1 && !visited[j]) {
                dfs(j, isConnected, visited);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int provinces = 0;
        vector<bool>visited(n,false);
        for(int i=0; i<n; i++) {
            if(!visited[i]) {
                provinces++;
                dfs(i, isConnected, visited);
            }
        }
        return provinces;
    }
};

// time = o(n*2)
// space = o(n)