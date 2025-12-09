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
    vector<int> rightSideView(TreeNode* root) {
       if(!root) return {};
       vector<int>ans;
       queue<TreeNode*>q;
       q.push(root);
       while(!q.empty()) {
        int size = q.size();
        TreeNode* curr = nullptr;
        for(int i=0; i<size; i++) {
            curr = q.front();
            q.pop();
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
        }
        ans.push_back(curr->val);
       } 
       return ans;
    }
};
//tc=0(n)
//sc=0(n)