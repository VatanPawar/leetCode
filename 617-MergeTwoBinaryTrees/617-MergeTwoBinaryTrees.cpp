// Last updated: 7/11/2025, 12:07:35 AM
class Solution {
public:
    void solve(TreeNode* r1, TreeNode* r2, TreeNode*& ans) {
        if (!r1 && !r2) return;

        if (!r1) {
            ans = new TreeNode(r2->val);
            solve(nullptr, r2->left, ans->left);
            solve(nullptr, r2->right, ans->right);
            return;
        }

        if (!r2) {
            ans = new TreeNode(r1->val);
            solve(r1->left, nullptr, ans->left);
            solve(r1->right, nullptr, ans->right);
            return;
        }

        ans = new TreeNode(r1->val + r2->val);
        solve(r1->left, r2->left, ans->left);
        solve(r1->right, r2->right, ans->right);
    }

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* ans = nullptr;
        solve(root1, root2, ans);
        return ans;
    }
};
