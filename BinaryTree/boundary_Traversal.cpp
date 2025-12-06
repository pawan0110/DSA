// Boundary Traversal

// Given a root of Binary Tree, perform the boundary traversal of the tree.

// The boundary traversal is the process of visiting the boundary nodes of the binary tree in the anticlockwise direction, starting from the root.

// The boundary of a binary tree is the concatenation of the root, the left boundary, the leaves ordered from left-to-right, and the reverse order of the right boundary.

// The left boundary is the set of nodes defined by the following:

// The root node's left child is in the left boundary. If the root does not have a left child, then the left boundary is empty.

// If a node in the left boundary and has a left child, then the left child is in the left boundary.

// If a node is in the left boundary, has no left child, but has a right child, then the right child is in the left boundary.

// The leftmost leaf is not in the left boundary.

// The right boundary is similar to the left boundary, except it is the right side of the root's right subtree. Again, the leaf is not part of the right boundary, and the right boundary is empty if the root does not have a right child.

// Examples:
// Input : root = [1, 2, 3, 4, 5, 6, 7, null, null, 8, 9]

// Output : [1, 2, 4, 8, 9, 6, 7, 3]

// Input : root = [1, 2, null, 4, 9, 6, 5, 3, null, null, null, null, null, 7, 8]

// Output : [1, 2, 4, 6, 5, 7, 8]

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : data(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

bool isLeaf(TreeNode *node)
{
    return node && !node->left && !node->right;
}

void addLeftNode(TreeNode *root, vector<int> &ans)
{
    TreeNode *curr = root->left;
    while (curr)
    {
        if (!isLeaf(curr))
            ans.push_back(curr->data);
        if (curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }
}

void addLeafNode(TreeNode *root, vector<int> &ans)
{
    if (!root)
        return;

    if (isLeaf(root))
    {
        ans.push_back(root->data);
        return;
    }

    addLeafNode(root->left, ans);
    addLeafNode(root->right, ans);
}

void addRightNode(TreeNode *root, vector<int> &ans)
{
    TreeNode *curr = root->right;
    vector<int> temp;

    while (curr)
    {
        if (!isLeaf(curr))
            temp.push_back(curr->data);
        if (curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }

    reverse(temp.begin(), temp.end());
    ans.insert(ans.end(), temp.begin(), temp.end());
}

vector<int> boundary(TreeNode *root)
{

    vector<int> ans;
    if (!root)
        return ans;

    if (!isLeaf(root))
        ans.push_back(root->data);

    addLeftNode(root, ans);
    addLeafNode(root, ans);
    addRightNode(root, ans);

    return ans;
}

// Time:  O(n)   (every node visited once)
// Space: O(h)   (recursion stack height = height of tree)
