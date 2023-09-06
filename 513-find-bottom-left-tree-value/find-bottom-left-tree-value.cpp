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
    int findBottomLeftValue(TreeNode* root) {
        int ans;
        
        int mx=-1;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            TreeNode*temp=q.front().first;
            int level=q.front().second;
            q.pop();
            if(level>mx){
                mx=level;
                ans=temp->val;
            }
            if(temp->left!=NULL){
                q.push({temp->left,level+1});
            }
            if(temp->right!=NULL){
                q.push({temp->right,level+1});
            }

        }

        return ans;
        
    }
};