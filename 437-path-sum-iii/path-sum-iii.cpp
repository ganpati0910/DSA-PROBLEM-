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
    void solve(TreeNode*root,int target,vector<int>&v,int &ans){
        if(root==NULL){
            return ;
        }
        v.push_back(root->val);
       solve(root->left,target,v,ans);
       solve(root->right,target,v,ans);
       int n=v.size();
       long long sum=0;
       for(int i=n-1; i>=0; i--){
           sum+=v[i];
           if(sum==target){
               ans++;
           }
       }
       v.pop_back();    
    }
    int pathSum(TreeNode* root, int target) {
        vector<int>v;
        int ans=0;
         solve(root,target,v,ans);
         return ans;
        
    }
};