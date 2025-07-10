// Last updated: 7/11/2025, 12:09:23 AM
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return NULL;
        
        // Swap left and right subtrees
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        // Recursively invert left and right subtrees
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
    }
};
