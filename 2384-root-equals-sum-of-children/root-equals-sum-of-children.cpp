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
    bool ans=true;
    int solve(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL&&root->right==NULL){
            return root->val;
        }
        int left=solve(root->left);
        int right=solve(root->right);
        if(root->val!=left+right){
            ans=false;
        }
         return left+right+root->val;
    }
    bool checkTree(TreeNode* root) {
        solve(root);
        return ans;
        
    }
};