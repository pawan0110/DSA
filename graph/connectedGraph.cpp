#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    
    void dfs(int node, vector<int> adj[], vector<bool> &visited) {
        visited[node] = true;
        for (int neighbour : adj[node]) {
            if (!visited[neighbour]) {
                dfs(neighbour, adj, visited);
            }
        }
    }

    int findNumberOfComponent(int V, vector<vector<int>> &edges) {
        vector<int> adj[V];   

        for (auto &e : edges) {
            int u = e[0];
            int w = e[1];     
            adj[u].push_back(w);
            adj[w].push_back(u);
        }

        vector<bool> visited(V, false);  
        int components = 0;

        for (int i = 0; i < V; i++) {    
            if (!visited[i]) {
                components++;
                dfs(i, adj, visited);
            }
        }

        return components;
    }
};
// tc= o(v+e)
// space = o(v+e)