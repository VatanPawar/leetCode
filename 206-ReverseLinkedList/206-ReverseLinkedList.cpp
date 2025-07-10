// Last updated: 7/11/2025, 12:09:31 AM

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* prev = NULL;
        ListNode* h2 = reverseList(head->next);
        head->next->next = head;
        head->next=prev;
        return h2;
    }

};