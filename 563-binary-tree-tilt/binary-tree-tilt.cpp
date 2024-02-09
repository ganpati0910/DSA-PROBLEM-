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
    int sum(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        int lef=sum(root->left);
        int rig=sum(root->right);
        return lef+rig+root->val;
    }
    int findTilt(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int sum1=abs(sum(root->left)-sum(root->right));
        sum1+=findTilt(root->left)+findTilt(root->right);
        return sum1;


        
    }
};