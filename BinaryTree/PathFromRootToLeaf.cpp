#include <bits/stdc++.h>
using namespace std;


struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};
class Solution{
	public:
        void dfs(TreeNode* node, vector<vector<int>>& ans, vector<int>& path) {
            if(!node) return ;
            path.push_back(node->val);
            if(!node->left && !node->right) {
                ans.push_back(path);
            }
            dfs(node->left,ans,path);
            dfs(node->right, ans, path);
            path.pop_back();
        }
		vector<vector<int>> allRootToLeaf(TreeNode* root) {
            //your code goes here
            vector<vector<int>>ans;
            vector<int>path;
            dfs(root,ans,path);
            return ans;
		}
};