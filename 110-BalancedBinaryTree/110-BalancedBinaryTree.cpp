// Last updated: 7/11/2025, 12:10:19 AM
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
int getHeight(TreeNode*root){
    if(root==NULL){
        return 0;
    }
    int lh=getHeight(root->left);
    int rh = getHeight(root->right);
    int ans = max(lh,rh)+1;
    return ans;
}
    bool isBalanced(TreeNode* root) {
        
        //bc
        if(root==NULL){
            return 1;
        }
        //1case
       int lh=getHeight(root->left);
        int rh=getHeight(root->right);
        int absDiff = abs(lh-rh);
        bool status= (absDiff<=1);

        //baki recursion
        bool leftAns=isBalanced(root->left);
        bool rightAns=isBalanced(root->right);

        //
        return leftAns && rightAns && status;
















    }
};