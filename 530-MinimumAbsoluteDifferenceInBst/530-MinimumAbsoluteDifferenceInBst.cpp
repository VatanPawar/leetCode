// Last updated: 7/11/2025, 12:07:53 AM
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
void solve(TreeNode* root,vector<int>&ans){
if(root==NULL){
    return;
}
//lnr
solve(root->left,ans);
ans.push_back(root->val);
solve(root->right,ans);
}
    int getMinimumDifference(TreeNode* root) {
      vector<int>ans;
      solve(root,ans);
      int n=ans.size();
      int min=INT_MAX;
      for(int i=0;i<n-1;i++){
        if(abs(ans[i]-ans[i+1])<min){
            min=abs(ans[i]-ans[i+1]);
        }
      }
      return min;
      
    }
};