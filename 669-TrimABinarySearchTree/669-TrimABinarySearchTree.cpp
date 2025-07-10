// Last updated: 7/11/2025, 12:07:24 AM
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if (!root) return nullptr;

        // If current node's value is less than low, discard left subtree
        if (root->val < low)
            return trimBST(root->right, low, high);

        // If current node's value is greater than high, discard right subtree
        if (root->val > high)
            return trimBST(root->left, low, high);

        // Otherwise, trim both subtrees
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);
        return root;
    }
};
