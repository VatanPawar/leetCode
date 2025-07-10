// Last updated: 7/11/2025, 12:07:54 AM
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if (!head || !head->next) return head;  // Edge cases: empty list or single-node list

        // Initialize two pointers and a counter
        ListNode* first = head;
        ListNode* second = head;
        ListNode* kthFromStart = nullptr;

        // Move `first` to the k-th node
        for (int i = 1; i < k; i++) {
            first = first->next;
        }
        
        // Mark the k-th node from the start
        kthFromStart = first;

        // Move `first` to the end, while `second` lags behind by `k` nodes
        while (first->next) {
            first = first->next;
            second = second->next;
        }

        // `second` now points to the k-th node from the end

        // Swap the values of `kthFromStart` and `second`
        int temp = kthFromStart->val;
        kthFromStart->val = second->val;
        second->val = temp;

        return head;
    }
};
