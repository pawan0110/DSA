#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         if (root == NULL) return {};
//         queue<TreeNode*> q;
//         q.push(root);
//         vector<vector<int>> result;
//         bool leftToRight = true;
//         while(!q.empty()) {
//            vector<int>level;
//            int size = q.size();
//            while(size--){
//              TreeNode* node = q.front();
//             q.pop();
//             level.push_back(node->val);
//             if(node->left) q.push(node->left);
//             if(node->right) q.push(node->right);
//            }
//            if(!leftToRight) reverse(level.begin(),level.end());
//             result.push_back(level);
//             leftToRight = !leftToRight;
//         }
//         return result;
// }
// //tc=0(n)
// //sc=0(n)

   vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root == NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> result;
        bool leftToRight = true;
        while(!q.empty()) {
           deque<int>level;
           int size = q.size();
           while(size--){
             TreeNode* node = q.front();
            q.pop();
            if(leftToRight){
                level.push_back(node->val);
            }else {
                level.push_front(node->val);
            }
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
           }
          
            result.push_back(vector<int>(level.begin(),level.end()));
            leftToRight = !leftToRight;
        }
        return result;
    }