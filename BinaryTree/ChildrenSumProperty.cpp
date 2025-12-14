// Children Sum Property in Binary Tree

// Given the root of a binary tree, return true if and only if every node’s value is equal to the sum of the values stored in its left and right children.

// For any missing ( null ) child, its value is treated as 0.
// A leaf node automatically satisfies the rule because both children are null.

// Example 1

// Input: root = [1,4,3,5]

// Output: false

// Explanation:

// The root is 1, but its children sum to 4 + 3 = 7. Since 1 ≠ 7, the tree violates the property.
// Example 2

// Input: root = [10,4,6,1,3,2,4]

// Output: true

// Explanation:

// 4 = 1 + 3
// 6 = 2 + 4
// 10 = 4 + 6
// All internal nodes satisfy the condition.
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    bool checkChildrenSum(TreeNode *root)
    {
        // Your code goes here
        if (!root)
            return true;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();

            if (!node->left && !node->right)
                continue;

            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
            int left = node->left ? node->left->val : 0;
            int right = node->right ? node->right->val : 0;
            if (node->val != (left + right))
            {
                return false;
            }
        }
        return true;
    }
};
// tc = 0(n)
// sc = 0(n)