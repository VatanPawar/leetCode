// Last updated: 7/11/2025, 12:10:20 AM
class Solution {
public:
    TreeNode* buildBST(vector<int>& arr, int left, int right) {
        if (left > right) return nullptr;

        int middle = (left + right) / 2;
        TreeNode* root = new TreeNode(arr[middle]);
        root->left = buildBST(arr, left, middle - 1);
        root->right = buildBST(arr, middle + 1, right);
        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> arr;
        while (head) {
            arr.push_back(head->val);
            head = head->next;
        }

        // No need to sort, as the list is already sorted
        int n = arr.size();
        int middle = n / 2;

        // Build balanced BST from the sorted array
        TreeNode* root = buildBST(arr, 0, n - 1);
        return root;
    }
};
