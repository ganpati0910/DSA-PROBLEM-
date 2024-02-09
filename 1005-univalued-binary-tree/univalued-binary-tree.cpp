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
    bool isUnivalTree(TreeNode* root) {
        vector<int>ans;
        set<int>st;
        if(root==NULL){
            return true;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
           TreeNode* node=q.front();
           q.pop();
           ans.push_back(node->val);
           if(node->left!=NULL){
               q.push(node->left);
           }
           if(node->right!=NULL){
               q.push(node->right);
           }
        }
        for(int i=0; i<ans.size(); i++){
            st.insert(ans[i]);
        }
        if(st.size()!=1){
            return false;
        }
        return true;
        
    }
};