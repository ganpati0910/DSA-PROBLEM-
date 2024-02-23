/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>ans1;
            for(int i=0; i<size; i++){
                root=q.front();
                q.pop();
                ans1.push_back(root->val);
                for(auto  node: root->children){
                    q.push(node);
                }
            }
            ans.push_back(ans1);
        }
        return ans;
        
    }
};