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
    int height(TreeNode*root){
        int ans=0;
        if(root==NULL){
            return ans;
        }
        int left=height(root->left);
        int right=height(root->right);
        ans=max(left,right)+1;
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int lefth=height(root->left);
        int righth=height(root->right);
        int leftd=diameterOfBinaryTree(root->left);
        int rightd=diameterOfBinaryTree(root->right);
        return max(lefth+righth,max(leftd,rightd));
        
    }
};