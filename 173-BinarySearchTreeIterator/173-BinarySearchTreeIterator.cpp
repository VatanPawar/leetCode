// Last updated: 7/11/2025, 12:09:43 AM
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
class BSTIterator {
public:
    vector<int>arr;
    int i=0;
    void solve(TreeNode* root,vector<int>&arr){
        if(root==NULL){
            return;
        }
        solve(root->left,arr);
        arr.push_back(root->val);
        solve(root->right,arr);
    }
    BSTIterator(TreeNode* root) {
        arr.push_back(-1);
        solve(root,arr);
    }
    
    int next() {
        i++;
        auto it=arr.begin()+i;
        return *it;
    }
    
    bool hasNext() {
        if(i<arr.size()-1){
            return 1;
        }
        return 0;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */