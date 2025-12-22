#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "#,";
        return to_string(root->val) + "," +serialize(root->left) + serialize(root->right);

    }

    TreeNode* deserialize(string data) {
    stringstream ss(data);
    queue<string> q;
    string s;
    while (getline(ss, s, ',')) q.push(s); 
    return decode(q);
}

TreeNode* decode(queue<string>& q) {
    string s = q.front();
    q.pop();
    
    if (s == "#") return nullptr;
    
    TreeNode* root = new TreeNode(stoi(s)); 
    root->left = decode(q);
    root->right = decode(q);
    return root;
}
};

// tc = o(n)
// sc = o(n)