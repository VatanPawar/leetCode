// Last updated: 7/11/2025, 12:08:25 AM
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

void solve(int &ans,TreeNode*root){
    if(root==NULL){
        return;
    }
    if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL ){
        ans+=root->left->val;
        
    }
    solve(ans,root->left);
    
    solve(ans,root->right);



}
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        solve(ans,root);
        return ans;
    }
};