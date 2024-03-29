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
    void solve(TreeNode* root, int target,vector<int>&v,vector<vector<int>>&ans){
        if(root==NULL){
            return;
        }
        if(root!=NULL){
            v.push_back(root->val);
        if(root->left==NULL&&root->right==NULL&&root->val==target){
               ans.push_back(v);
        }
        }
        
        solve(root->left,target-root->val,v,ans);
        solve(root->right,target-root->val,v,ans);
        v.pop_back();


    }
    vector<vector<int>> pathSum(TreeNode* root, int target){
        vector<vector<int>>ans;
        vector<int>v;
        solve(root,target,v,ans);
        return ans;
        
    }
};