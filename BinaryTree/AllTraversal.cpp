#include <bits/stdc++.h>
using namespace std;

// Given a binary tree with root node. Return the In-order,Pre-order and Post-order traversal of the binary tree.

// Examples:
// Input : root = [1, 3, 4, 5, 2, 7, 6 ]

// Output : [ [5, 3, 2, 1, 7, 4, 6] , [1, 3, 5, 2, 4, 7, 6] , [5, 2, 3, 7, 6, 4, 1] ]

// Explanation : The In-order traversal is [5, 3, 2, 1, 7, 4, 6].
// The Pre-order traversal is [1, 3, 5, 2, 4, 7, 6].
// The Post-order traversal is [5, 2, 3, 7, 6, 4, 1].

class Solution
{
public:
    vector<vector<int>> treeTraversal(TreeNode *root)
        vector<int> inorder,
        preorder, postorder;
    if (root == NULL)
        return {inorder, preorder, postorder};

    stack<pair<TreeNode *, int>> st;
    st.push({root, 1});

    while (!st.empty())
    {
        auto it = st.top();
        st.pop();

        TreeNode *node = it.first;
        int state = it.second;

        if (state == 1)
        {
            preorder.push_back(node->data);
            st.push({node, 2});
            if (node->left)
                st.push({node->left, 1});
        }
        else if (state == 2)
        {
            inorder.push_back(node->data);
            st.push({node, 3});
            if (node->right)
                st.push({node->right, 1});
        }
        else
        {
            postorder.push_back(node->data);
        }
    }
    return {inorder, preorder, postorder};
}
}
;

// time complexity : 0(N)
// space complexity : 0(3N)  == 0(N)