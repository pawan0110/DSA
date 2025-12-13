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
    int widthOfBinaryTree(TreeNode* root) {
       if(!root) return 0;
       long long ans = 0;
       queue<pair<TreeNode*, long long>>q;
       q.push({root,0});

       while(!q.empty()) {
        int size = q.size();
        long long minIndex = q.front().second;
        long long first,last;

        for(int i=0; i<size; i++) {
            auto p = q.front();
            q.pop();
            TreeNode* node = p.first;
            long long index = p.second-minIndex;
            if(i==0) first = index;
            if(i==size-1) last = index;
            if(node->left)
             q.push({node->left, 2*index});
            if(node->right)
             q.push({node->right, 2*index+1});
        }
        ans = max(ans,last-first+1);
       } 
       return ans;
    }
};
//tc = 0(n)
//sc = 0(n)