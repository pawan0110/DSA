// 105. Construct Binary Tree from Preorder and Inorder Traversal
// Medium
// Topics
// premium lock icon
// Companies
// Given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree, construct and return the binary tree.

 

// Example 1:


// Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
// Output: [3,9,20,null,null,15,7]
// Example 2:

// Input: preorder = [-1], inorder = [-1]
// Output: [-1]
 

// Constraints:

// 1 <= preorder.length <= 3000
// inorder.length == preorder.length
// -3000 <= preorder[i], inorder[i] <= 3000
// preorder and inorder consist of unique values.
// Each value of inorder also appears in preorder.
// preorder is guaranteed to be the preorder traversal of the tree.
// inorder is guaranteed to be the inorder traversal of the tree.
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
    int preIndex = 0;
    unordered_map<int,int> inorderIndex;
    TreeNode* buildTreeHelper(vector<int>& preorder, vector<int>& inorder, int start, int end) {
        if(start>end)
         return NULL;
        int rootval = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootval);

        int inIndex = inorderIndex[rootval];

        root->left = buildTreeHelper(preorder, inorder, start, inIndex-1);
        root->right = buildTreeHelper(preorder,inorder, inIndex+1, end);
    }
    
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0; i<inorder.size(); i++){
            inorderIndex[inorder[i]]=i;
        }
        return buildTreeHelper(preorder,inorder,0,inorder.size()-1);
    }
};
//tc = o(n)
//sc=o(n)