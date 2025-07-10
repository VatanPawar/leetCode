// Last updated: 7/11/2025, 12:05:17 AM
class Solution {
public:

    void solve2(TreeNode* root, vector<int>& arr) {
        if (!root) return;
        solve2(root->left, arr);
        arr.push_back(root->val);
        solve2(root->right, arr);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> temp1, temp2, ans;
        solve2(root1, temp1);
        solve2(root2, temp2);

        // Two-pointer merge
        int i = 0, j = 0;
        while (i < temp1.size() && j < temp2.size()) {
            if (temp1[i] <= temp2[j]) {
                ans.push_back(temp1[i++]);
            } else {
                ans.push_back(temp2[j++]);
            }
        }
        // Append remaining elements
        while (i < temp1.size()) ans.push_back(temp1[i++]);
        while (j < temp2.size()) ans.push_back(temp2[j++]);

        return ans;
    }
};
