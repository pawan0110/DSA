#include <bits/stdc++.h>
using namespace std;


struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool checkChildrenSum(TreeNode* root) {
        // Your code goes here
        if(!root) return true;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            
            if(!node->left && !node->right) continue;

            if(node->left) {
                q.push(node->left);
            }
            if(node->right) {
                q.push(node->right);
            }
            int left = node->left ? node->left->val : 0;
            int right = node->right ? node->right->val : 0;
            if(node->val != (left + right)) {
                return false;
            }
            
        }
        return true;
    }
};
// tc = 0(n)
//sc = 0(n)