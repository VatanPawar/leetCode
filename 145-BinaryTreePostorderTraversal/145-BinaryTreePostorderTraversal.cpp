// Last updated: 7/11/2025, 12:09:54 AM
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
void store(TreeNode*root,vector<int>&ans){
    //lnr
    if(root==NULL){
        return;
    }
    store(root->left,ans);
    
    store(root->right,ans);
    TreeNode*temp=root;
    // temp->right=NULL;
    // temp->left=NULL;
    ans.push_back(temp->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> nodes;
         if(root==NULL){
            return nodes;
        }
        
        store(root,nodes);
        return nodes;
    }
};