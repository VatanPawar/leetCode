// Last updated: 7/11/2025, 12:05:55 AM
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
    void solve(TreeNode* root, int current, int &sum) {
        if (root == NULL) return;

        // Treat it as a binary number (left shift + add current digit)
        current = (current << 1) | root->val;

        // If it's a leaf node, add the computed number to sum
        if (root->left == NULL && root->right == NULL) {
            sum += current;
            return;
        }

        // Recursively go left and right
        solve(root->left, current, sum);
        solve(root->right, current, sum);
    }

    int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        solve(root, 0, sum);
        return sum;
    }
};
