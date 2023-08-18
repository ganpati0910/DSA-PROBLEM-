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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
          if (nums.empty()) return NULL;
        auto m = max_element(begin(nums), end(nums));
        TreeNode* root = new TreeNode(*m);
        if (m != begin(nums)) {
            vector<int> left(begin(nums), m);
            root->left = constructMaximumBinaryTree(left);
        }
        if (m != end(nums) - 1) {
            vector<int> right(m + 1, end(nums));
            root->right = constructMaximumBinaryTree(right);
        }
        return root;
    }
};
    