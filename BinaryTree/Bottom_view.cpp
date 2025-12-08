#include <bits/stdc++.h>
using namespace std;

//   Definition for a binary tree node.
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
  public:
    vector <int> bottomView(TreeNode *root){
      if(!root) return {};
      map<int,int>mp;
      queue<pair<TreeNode*, int>> q;
      q.push({root,0});
      while(!q.empty()) {
        auto [node,col] = q.front();
        q.pop();
        mp[col]=node->data;

        if(node->left) {
          q.push({node->left,col-1});
        }
        if(node->right) {
          q.push({node->right,col+1});
        }
      }
      vector<int> ans;
      for(auto &p: mp) {
        ans.push_back(p.second);
      } 
      return ans;
    }
};

// Time        O(N log N)
// Space       O(N)
