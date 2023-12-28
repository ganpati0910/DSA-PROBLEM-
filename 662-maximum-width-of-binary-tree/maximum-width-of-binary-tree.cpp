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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        if(root==NULL){
            return 0;
        }
        int maxwidth=0;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            int refing_indx=q.front().second;
            int first,last;
            for(int i=0; i<size; i++){
                int curr_indx=q.front().second-refing_indx;
                TreeNode*node=q.front().first;
                q.pop();
                if(i==0){
                    first=curr_indx;
                }
                if(i==size-1){
                    last=curr_indx;
                }
                if(node->left!=NULL){
                    q.push({node->left,(long long)curr_indx*2+1});
                }
                if(node->right!=NULL){
                    q.push({node->right,(long long)curr_indx*2+2});
                }
            }
            maxwidth=max(maxwidth,last-first+1);
        }
        return maxwidth;      
    }
};