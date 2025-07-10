// Last updated: 7/11/2025, 12:09:57 AM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
      ListNode* hasCycle(ListNode *head){
        ListNode *slow =head;
        ListNode *fast =head;

        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
                if(slow==fast){
                return fast;
            }
            }

        }
        return nullptr;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast=hasCycle(head);
        if(!fast) return nullptr;

        ListNode*slow=head;
        while(slow!=fast){
            if(slow==fast){
                return slow;
            }
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};