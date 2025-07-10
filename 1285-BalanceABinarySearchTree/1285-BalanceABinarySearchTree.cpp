// Last updated: 7/11/2025, 12:05:31 AM
class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> sortedArr;
        inorder(root, sortedArr);
        return createBST(sortedArr, 0, sortedArr.size() - 1);
    }

    void inorder(TreeNode* root, vector<TreeNode*>& sortedArr) {
        if (root == NULL) {
            return;
        }
        inorder(root->left, sortedArr);
        sortedArr.push_back(root);
        inorder(root->right, sortedArr);
    }

    TreeNode* createBST(vector<TreeNode*>& sortedArr, int start, int end) {
        if (start > end) {
            return NULL;
        }
        int mid = (start + end) / 2;

        TreeNode* root = sortedArr[mid];

        root->left = createBST(sortedArr, start, mid - 1);
        root->right = createBST(sortedArr, mid + 1, end);

        return root;
    }
};