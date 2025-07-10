// Last updated: 7/11/2025, 12:06:57 AM
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
    TreeNode* solve(TreeNode* root,int tgt,TreeNode* &ans){
        if(root==NULL){
            return root ;
        }
        if(root->val==tgt){
            ans=root;
            return root;
        }
        solve(root->left,tgt,ans);
        solve(root->right,tgt,ans);
        
        return ans;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans=NULL;
        return solve(root,val,ans);
    }
};