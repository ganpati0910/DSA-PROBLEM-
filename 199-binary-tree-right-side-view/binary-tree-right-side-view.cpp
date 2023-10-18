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
    void solve(TreeNode*root,int level,vector<int>&t){
        
        if(root==NULL){
            return;
        }
        if(level==t.size()){
            t.push_back(root->val);
        }
        solve(root->right,level+1,t);
        solve(root->left,level+1,t);

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>t;
        solve(root,0,t);
        return t;
        
    }
};