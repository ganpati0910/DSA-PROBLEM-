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
    void preorder(TreeNode*root,set<int>&st){
        if(root==NULL){
            return;
        }
        st.insert(root->val);
        preorder(root->left,st);
        preorder(root->right,st);
    }
    int findSecondMinimumValue(TreeNode* root){
        set<int>st;
        preorder(root,st);
        if(st.size()==1){
            return-1;
        }
        priority_queue<int>pq;
        for(auto it:st){
            pq.push(it);
            if(pq.size()>2){
                pq.pop();
            }
            st.erase(it);
        }
        return pq.top();

        
    }
};