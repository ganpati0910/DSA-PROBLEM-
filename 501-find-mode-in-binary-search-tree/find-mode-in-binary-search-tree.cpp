/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:  
     unordered_map<int,int>mp;
     void solve(TreeNode*root){
         if(root==NULL){
             return;
         }
         solve(root->left);
         mp[root->val]++;
         solve(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        solve(root);
        vector<int>ans;
         int maxi=0;
        for(auto it:mp){
            if(it.second>maxi){
                maxi=it.second;
            }
        }

        for(auto it:mp){
            if(it.second==maxi){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};