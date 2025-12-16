#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};
class Solution{
public:
    TreeNode* markParent(
        TreeNode* root,
        unordered_map<TreeNode*, TreeNode*>& parent,
        int start
    ) {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* target = nullptr;

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if (node->val == start)
                target = node;

            if (node->left) {
                parent[node->left] = node;
                q.push(node->left);
            }
            if (node->right) {
                parent[node->right] = node;
                q.push(node->right);
            }
        }
        return target;
    }

    int timeToBurnTree(TreeNode* root, int start) {
        unordered_map<TreeNode*, TreeNode*> parent;
        unordered_map<TreeNode*, bool> visited;

        TreeNode* target = markParent(root, parent, start);

        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;

        int timeCount = 0;

        while (!q.empty()) {
            int size = q.size();
            bool burned = false;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (node->left && !visited[node->left]) {
                    visited[node->left] = true;
                    q.push(node->left);
                    burned = true;
                }

                if (node->right && !visited[node->right]) {
                    visited[node->right] = true;
                    q.push(node->right);
                    burned = true;
                }

                if (parent.count(node) && !visited[parent[node]]) {
                    visited[parent[node]] = true;
                    q.push(parent[node]);
                    burned = true;
                }
            }

            if (burned)
                timeCount++;
        }
        return timeCount;
    }
};
//tc = 0(n)
//sc = 0(n)
