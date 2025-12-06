#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root == NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> result;
        bool leftToRight = true;
        while(!q.empty()) {
           vector<int>level;
           int size = q.size();
           while(size--){
             TreeNode* node = q.front();
            q.pop();
            level.push_back(node->val);
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
           }
           if(!leftToRight) reverse(level.begin(),level.end());
            result.push_back(level);
            leftToRight = !leftToRight;
        }
        return result;
}
//tc=0(n)
//sc=0(n)