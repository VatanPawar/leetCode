// Last updated: 7/11/2025, 12:06:30 AM
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
void store(TreeNode*root,vector<TreeNode*>&ans){
    //lnr
    if(root==NULL){
        return;
    }
    store(root->left,ans);
    TreeNode*temp=root;
    // temp->right=NULL;
    // temp->left=NULL;
    ans.push_back(temp);
    store(root->right,ans);
}
    TreeNode* increasingBST(TreeNode* root) {
        //inorder is sorted
        if(root==NULL){
            return NULL;
        }
        vector<TreeNode*> nodes;
        store(root,nodes);
    
        TreeNode* temp=nodes[0];
        TreeNode* temp2=temp;
        for(int i=1;i<nodes.size();i++){
            TreeNode* newNode=nodes[i];
            temp->left=NULL;    //mistaken here
            temp->right=nodes[i];
            temp=temp->right;
        }
        temp->left = NULL; // Ensure last node has no left child
        temp->right = NULL;
        
        return temp2;
    }
};