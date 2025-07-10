// Last updated: 7/11/2025, 12:10:24 AM
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
    int maxDepth(TreeNode* root) {
        //bc
        if(root==NULL){
            return 0;
        }
        //1case
        int leftSubtreeHeight=maxDepth(root->left);
        int rightSubtreeHeight=maxDepth(root->right);
        int maxHeight=max(leftSubtreeHeight,rightSubtreeHeight);
        int total= maxHeight+1;
        return total;
    }
};