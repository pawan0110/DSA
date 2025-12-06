#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSum = INT_MIN;
    int maxGain(TreeNode* root){
        if(!root) return 0;
        int left = max(0, maxGain(root->left));
        int right = max(0, maxGain(root->right));

        maxSum = max(maxSum, root->val+left+right);
        return root->val + max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        maxGain(root);
        return maxSum;
    }
};
//tc=0(n)
//sc=0(n)