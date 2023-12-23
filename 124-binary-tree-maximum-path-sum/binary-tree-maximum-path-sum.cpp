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
    int maxi=INT_MIN;
    int height(TreeNode*root){
        int ans=INT_MIN;
        if(root==NULL){
            return 0;
        }
        int left= max(0,height(root->left));
        int right=max(0,height(root->right));
        ans= root->val+max(left,right);
        maxi=max(maxi,root->val+left+right);
        return ans;

    }
    int maxPathSum(TreeNode* root) {
        height(root);
        return maxi; 
    }
};