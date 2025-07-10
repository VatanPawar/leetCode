// Last updated: 7/11/2025, 12:10:07 AM
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
    int solve(TreeNode*root,int &ans){
        if(root==NULL ){
            return 0;
        }

        //left subtreee ans
        int la = solve(root->left,ans);
        //right subtree ans
        int ra = solve(root->right,ans);

        int temp = la+ra+root->val;
        int temp2=max(root->val + la,root->val+ra);
        temp = max(temp,temp2);
        ans=max(ans,max(temp,root->val));
        
        return max(max(la,ra) + root->val,root->val);

        //returning maximum of leftsubtree,rightsubtree ,l+r+current

    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
       solve(root,ans);
       return ans;
    }
};