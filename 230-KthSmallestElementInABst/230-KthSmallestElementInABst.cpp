// Last updated: 7/11/2025, 12:09:19 AM
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
    void createInorder(TreeNode* root,vector<int>&inorder){
        if(root==NULL){
            return;
        }
        createInorder(root->left,inorder);
        inorder.push_back(root->val);
        createInorder(root->right,inorder);

    }
    int kthSmallest1(TreeNode* root, int k) {
        //method 1  - maintain inorder vector
        vector<int>inorder;
        createInorder(root,inorder);
        return inorder[k-1];
    }

    // method-0
     void solve(TreeNode* root, int k, int &count, TreeNode *&ans) {
        if(root == NULL) {
            return ;
        }
        //LNR
        //L
        solve(root->left, k, count, ans);
        //N
        count++;
        if(count == k) {
            ans = root;
            return;
        }
        //R
        solve(root->right,k,count, ans);   
    }
    int kthSmallest2(TreeNode* root, int k) {
        int count = 0;
        TreeNode* ans = NULL;
        solve(root,k,count,ans);
        return ans->val;
    }
    void solve(TreeNode*root,priority_queue<int,vector<int>,greater<int>>&pq,int k){
        if(root==NULL){
            return;
        }
        solve(root->left,pq,k);
        if(pq.size()==k){
            if(root->val<pq.top()){
                pq.pop();
                pq.push(root->val);
            }
        }
        
           pq.push(root->val) ;
        
        solve(root->right,pq,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        solve(root,pq,k);
        int ans=pq.top();
        while(!pq.empty()&&k--){
            ans=pq.top();pq.pop();
        }
        return ans;
    }
};