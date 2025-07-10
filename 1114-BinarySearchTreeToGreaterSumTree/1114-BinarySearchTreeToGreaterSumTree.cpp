// Last updated: 7/11/2025, 12:05:49 AM
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
//catch - inorder traverssal of BST gives the sorted array values 
    void storeInorder(TreeNode* root, vector<int>& inorder) {
        if(root == NULL) {
            return;
        }
        //LNR
        storeInorder(root->left, inorder);
        inorder.push_back(root->val);
        storeInorder(root->right, inorder);
    } 
    void updateTree(TreeNode* root, vector<int> inorder, int &index) {
        if(root == NULL) {
            return;
        }
        //LNR
        updateTree(root->left, inorder, index);
        root->val = inorder[index];
        index++;
        updateTree(root->right, inorder, index);
    }
    TreeNode* bstToGst2(TreeNode* root) {
        if(root == NULL) {
            return NULL;
        }
        if(root->left == NULL && root->right == NULL) {
            return root;
        }
        //step1: store inorder
        vector<int> inorder;
        storeInorder(root, inorder);
        //step2: update inorder as per question rules
        int n = inorder.size();
        for(int i=n-1; i>=0; i--) {
            int currVal = inorder[i];
            int nextVal = 0;
            if(i+1 < n) {
                nextVal = inorder[i+1];
            }
            int sum = currVal + nextVal;
            //replace krre h 
            inorder[i] = sum;
        }
        //step3: update tree using inorder
        int index= 0;
        updateTree(root, inorder,index);
        return root;

    }






void update(TreeNode* root,int &sum){
    if(root==NULL){
        return ;
    }
    update(root->right,sum);
    // cout<<"root val is "<<root->val<<endl;
    // int temp=root->val;
    root->val+=sum;
    // cout<<"sum val is "<<sum <<endl;
    sum=root->val;
    // cout<<"sum val is "<<sum <<endl;
    update(root->left,sum);
    // cout<<endl;
}



TreeNode* bstToGst(TreeNode* root) {
 //rnl
int sum=0;
 update(root,sum);
return root;
}

};