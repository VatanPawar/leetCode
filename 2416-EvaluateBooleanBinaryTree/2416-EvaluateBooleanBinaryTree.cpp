// Last updated: 7/11/2025, 12:03:40 AM
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
bool solve(TreeNode*root){
    //bc
    if(root==NULL){
        return 1;
    }
    
    //1case
    if(!root->left && !root->right){
        return root->val;
    }
    if(root->val==2){
         bool lA=1;
        bool rA= 1;
        if(root->left){
            lA=solve(root->left);
        }
        if(root->right){
            rA= solve(root->right);
        }
       
        return lA||rA;
    }
    if(root->val==3){
         bool lA=1;
        bool rA= 1;
        if(root->left){
            lA=solve(root->left);
        }
        if(root->right){
            rA= solve(root->right);
        }
       
        return lA && rA;
    }
    return 1;

}
    bool evaluateTree(TreeNode* root) {
        return solve(root);
    }
};