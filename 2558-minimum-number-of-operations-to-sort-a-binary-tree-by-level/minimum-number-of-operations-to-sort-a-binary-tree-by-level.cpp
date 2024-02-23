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
    int minswap(vector<int>nums,int n){
        vector<pair<int,int>>vec;
        for(int i=0; i<n; i++){
            vec.push_back({nums[i],i});
        }
        sort(vec.begin(),vec.end());
        int swaps=0;
        for(int i=0; i<n; i++){
            if(i==vec[i].second){
                continue;
            }
            else{
                swaps++;
                swap(vec[vec[i].second],vec[i]);
                i--;
            }
        }
        return swaps;
    }
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==NULL){
            return 0;
        }
        int count=0;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>ans;
            for(int i=0;i<size; i++){
                TreeNode*node=q.front();
                q.pop();
                ans.push_back(node->val);
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
            }
            int k=ans.size();
            count+=minswap(ans,k);
        }
        return count;     
    }
};