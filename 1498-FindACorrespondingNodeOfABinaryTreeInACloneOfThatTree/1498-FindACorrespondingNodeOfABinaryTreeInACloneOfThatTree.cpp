// Last updated: 7/11/2025, 12:05:04 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void solve(TreeNode* root1, TreeNode* root2, TreeNode* tgt,TreeNode* &ans) {
        if(root1==NULL){
            return ;
        }
        if(root1==tgt){
            ans=root2;
            return ;
        }
        solve(root1->left,root2->left,tgt,ans);
        solve(root1->right,root2->right,tgt,ans);
        
    }
    TreeNode* getTargetCopy(TreeNode* root1, TreeNode* root2, TreeNode* target) {
        TreeNode* ans=NULL;
        solve(root1,root2,target,ans);
        return ans;
    }
};