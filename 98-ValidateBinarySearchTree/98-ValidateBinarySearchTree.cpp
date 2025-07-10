// Last updated: 7/11/2025, 12:10:27 AM
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
void make(TreeNode* root,vector<int>&arr){
//lnr;
if(root==NULL){
    return;
}
make(root->left,arr);
arr.push_back(root->val);
make(root->right,arr);
}
bool solve(TreeNode* root){
  vector<int>arr;
  make(root,arr);
  for(int i=0;i<arr.size()-1;i++){
    if(arr[i]>=arr[i+1]){
        return false;
    };
  }
  return true;
}
    bool isValidBST(TreeNode* root) {
   return solve(root);
}};