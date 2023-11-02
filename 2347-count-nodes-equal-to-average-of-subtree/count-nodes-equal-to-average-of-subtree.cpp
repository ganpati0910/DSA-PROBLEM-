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
    int ans=0;
    int countnodes(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        return 1+countnodes(root->left)+countnodes(root->right);
    }
    int  solve(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        
        int left=solve(root->left);
        int right=solve(root->right);
        int val=root->val;
        if(((left+right+val)/countnodes(root))==val){
            ans++;
        }

        return left+right+root->val;

    }
    int averageOfSubtree(TreeNode* root) {
      solve(root);
      return ans;
        
    }
};