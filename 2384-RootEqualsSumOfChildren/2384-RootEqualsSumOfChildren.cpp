// Last updated: 7/11/2025, 12:03:44 AM
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
    bool solve(TreeNode* root){
        if(root->left&&root->right){
            return root->val ==(root->left->val + root->right->val);
        }
        return 1;
    }
    bool checkTree(TreeNode* root) {
        return solve(root);
    }
};