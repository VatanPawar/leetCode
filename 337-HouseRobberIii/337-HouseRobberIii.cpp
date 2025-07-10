// Last updated: 7/11/2025, 12:08:50 AM
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
unordered_map<TreeNode*,unordered_map<bool,int>>t;
int solve(TreeNode*root,bool canRob){
    if(root==nullptr){
        return 0;
    }
    if(t[root].find(canRob)!=t[root].end()){
        return t[root][canRob];
    }
    if(canRob==false){
        return  t[root][canRob]=(solve(root->left,true)+solve(root->right,true));
    }
    else{
        int norob=solve(root->left,true)+solve(root->right,true);
        int rob= root->val+(solve(root->left,false)+solve(root->right,false));
        return  t[root][canRob]=max(rob,norob);
    }
}
    int rob(TreeNode* root) {
        return solve(root,1);
    }
};