// Last updated: 7/11/2025, 12:06:07 AM
class Solution {
public:
    void solve(TreeNode* root, unordered_map<int, vector<pair<int, int>>>& hash, int i, int depth, int& mini, int& maxi) {
        if (root == NULL) {
            return;
        }
        mini = min(i, mini);
        maxi = max(i, maxi);
        hash[i].push_back({depth, root->val});  // Store both depth and value
        solve(root->left, hash, i - 1, depth + 1, mini, maxi);
        solve(root->right, hash, i + 1, depth + 1, mini, maxi);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        unordered_map<int, vector<pair<int, int>>> hash;  // Store pairs of depth and value
        vector<vector<int>> ans;
        solve(root, hash, 0, 0, mini, maxi);
        
        for (int i = mini; i <= maxi; i++) {
            // Sort by depth first and then by value
            sort(hash[i].begin(), hash[i].end());  // Sort by depth and value
            vector<int> temp;
            for (auto& p : hash[i]) {
                temp.push_back(p.second);  // Add the node value to the result
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
