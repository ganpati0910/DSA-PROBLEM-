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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int,map<int,multiset<int>>>mp;
        q.push({root,{0,0}});
        while(!q.empty()){
            int size=q.size();
            for(int i=0; i<size;i++){
            TreeNode*node=q.front().first;
            int hd=q.front().second.first;
            int level=q.front().second.second;
            q.pop();
            mp[hd][level].insert(node->val);
            if(node->left!=NULL){
                q.push({node->left,{hd-1,level+1}});
            }
            if(node->right!=NULL){
                q.push({node->right,{hd+1,level+1}});
            }

            }
        }
        // ab  map me se apni values nikal ke vector me dalni hai 
        for(auto i:mp){
            vector<int>col;
            for(auto j:i.second){
                for(auto k:j.second){
                    col.push_back(k);
                }
            }
            ans.push_back(col);
        }
        return ans;
        
    }
};