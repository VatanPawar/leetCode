// Last updated: 7/11/2025, 12:10:22 AM
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
TreeNode *solve(vector<int>&inorder,int s, int e){
    //bc
    if(s>e){
        return NULL;
    }

    //1case
    int mid=(s+e)/2;
    int element=inorder[mid];
    TreeNode *root=new TreeNode(element);
    root->left=solve(inorder,s,mid-1);
    root->right=solve(inorder,mid+1,e);
    return root;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s=0;
        int n= nums.size();
        int e=n-1;
        int mid = (s+e)/2;
        TreeNode* root=solve(nums,s,e);
        return root;

    }
};