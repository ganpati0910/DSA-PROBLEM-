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
    int cnt=0;
    void traverse(TreeNode*root,int curr){
        if(root==NULL){
            return;
        }
        if(root->val>=curr){
            curr=root->val;
            cnt++;
        }
         traverse(root->left,curr);
         traverse(root->right,curr);

    }
public:
    int goodNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        traverse(root,root->val);
        return cnt;
       
    }
};