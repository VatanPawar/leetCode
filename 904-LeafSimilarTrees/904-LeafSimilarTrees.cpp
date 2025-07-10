// Last updated: 7/11/2025, 12:06:38 AM
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
    void solve(TreeNode*root,vector<int>&leaf){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            leaf.push_back(root->val);
        }
        solve(root->left,leaf);
        solve(root->right,leaf);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leaf1;
        solve(root1,leaf1);
            vector<int>leaf2;
        solve(root2,leaf2);
        if(leaf1.size()!=leaf2.size()){
            return 0;
        }
        for(int i=0;i<leaf1.size();i++){
            if(leaf1[i]!=leaf2[i]){
                return 0;
            }
        }
        return 1;
        
    }
};