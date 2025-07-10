// Last updated: 7/11/2025, 12:08:19 AM
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
    void solve(TreeNode* root,int &count,int rem,int tgt){
        
        if(root==NULL){
            return;
        }
        
        
        // if(rem<0 &&tgt>=0){
        //     return;
        // }
        
        
        rem-=root->val;
        cout<<"rem sum is "<<rem<<endl;
        solve(root->left,count,rem,tgt);
        // solve(root,count,tgt,tgt);
        solve(root->right,count,rem,tgt);
        if(rem==0){
            count++;
            rem=tgt;
        }
    }
    void solve2(TreeNode* root,int &count,int tgt){
        if(root==NULL){
            return;
        }
        solve2(root->left,count,tgt);
        solve(root,count,tgt,tgt);
        solve2(root->right,count,tgt);
    }
    int ans=0;
    void pathFromOneRoot(TreeNode* root,long long sum){
        if(!root){
            return;
        }
        if(sum==root->val){
            ans++;
        }
        pathFromOneRoot(root->left,sum-root->val);
         pathFromOneRoot(root->right,sum-root->val);
    }
    int pathSum(TreeNode* root, int targetSum) {
        // int count=0;
        // int remSum=targetSum;
        
        // solve2(root,count,targetSum);
        
        // return count;

        if(root){
            pathFromOneRoot(root,targetSum);
            pathSum(root->left,targetSum);
            pathSum(root->right,targetSum);
        }
        return ans;
    }
};