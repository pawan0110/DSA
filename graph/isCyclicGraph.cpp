#include <bits/stdc++.h>
using namespace std;
bool dfs(int node, int parent, vector<int>& visited, vector<int> adj[]) {
    visited[node] = 1;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            if (dfs(neighbor, node, visited, adj))
                return true;
        }
        else if (neighbor != parent) {
            return true;
        }
    }
    return false;
}
