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
    void preorder(TreeNode*root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        preorder(root->left,ans);
        ans.push_back(root->val);
        preorder(root->right,ans);

    }
    int minDiffInBST(TreeNode* root) {
       vector<int>ans;
       preorder(root,ans);
       int ans1=0;
       int mini=INT_MAX;
       for(int i=0; i<ans.size()-1; i++){
          mini=min(mini,abs(ans[i+1]-ans[i]));     
       }
       return mini;

        
    }
};