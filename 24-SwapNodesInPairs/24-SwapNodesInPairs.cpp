// Last updated: 7/11/2025, 12:11:16 AM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // If the list is empty or has only one node, no swap needed
        if (!head || !head->next) return head;

        // Initialize pointers
        ListNode* newHead = head->next; // The new head of the list after the first swap
        ListNode* prev = nullptr;
        ListNode* curr = head;

        // Traverse the list in pairs
        while (curr && curr->next) {
            ListNode* first = curr;
            ListNode* second = curr->next;

            // Perform the swap
            first->next = second->next;
            second->next = first;

            // Connect the previous pair to the current pair
            if (prev) {
                prev->next = second;
            }

            // Move pointers forward
            prev = first;
            curr = first->next;
        }

        return newHead;
    }
};
