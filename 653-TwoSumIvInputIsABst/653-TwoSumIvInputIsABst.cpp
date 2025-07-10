// Last updated: 7/11/2025, 12:07:27 AM
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
    void solve(TreeNode*root,vector<int>&arr){
        if(root==NULL){
            return ;
        }
        solve(root->left,arr);
        arr.push_back(root->val);
        solve(root->right,arr);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>arr;
        solve(root,arr);
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:arr){
            mp[it]--;
            int rem=k-it;
            if(mp[rem]>0){
                return 1;
            }
            mp[it]++;
        
        }
        return 0;
    }
};