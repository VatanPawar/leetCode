// Last updated: 7/11/2025, 12:10:25 AM
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
bool solve(TreeNode*root1,TreeNode*root2){
    if(root1==NULL && root2==NULL){
        return 1;
    }
    if(root1==NULL){
        return 0;
    }
    else if(root2==NULL){
        return 0;
    }
    
    if(root1->val!=root2->val){
        return 0;
    }
    bool a=solve(root1->left,root2->right);
    bool b=solve(root1->right,root2->left);

    return  a && b;

}
    bool isSymmetric(TreeNode* root) {
        return solve(root->left,root->right);
    }
};