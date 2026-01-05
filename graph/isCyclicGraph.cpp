#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    bool dfs(int node, int parent, vector<int> adj[], vector<int> &visited)
    {
        visited[node] = 1;

        for (int neighbor : adj[node])
        {
            if (!visited[neighbor])
            {
                if (dfs(neighbor, node, adj, visited))
                    return true;
            }
            else if (neighbor != parent)
            {
                return true;
            }
        }
        return false;
    }

    bool isCycle(int v, vector<int> adj[])
    {
        vector<int> visited(v, 0);

        for (int i = 0; i < v; i++)
        {
            if (!visited[i])
            {
                if (dfs(i, -1, adj, visited))
                    return true;
            }
        }
        return false;
    }
};