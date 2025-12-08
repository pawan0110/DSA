#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
     TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> q;

        q.push({root, {0, 0}});

        while (!q.empty()) {
            auto p = q.front();
            q.pop();

            TreeNode* temp = p.first;
            int col = p.second.first;
            int row = p.second.second;

            
            nodes[col][row].insert(temp->val);

       
            if (temp->left) {
                q.push({temp->left, {col - 1, row + 1}});
            }

            if (temp->right) {
                q.push({temp->right, {col + 1, row + 1}});
            }
        }

        vector<vector<int>> result;

        for (auto &colPair : nodes) {
            vector<int> colValues;

          
            for (auto &rowPair : colPair.second) {
                colValues.insert(colValues.end(),
                                 rowPair.second.begin(),
                                 rowPair.second.end());
            }

            result.push_back(colValues);
        }

        return result;
    }
};

// Total Time	O(N log N)
// Total Space	O(N)