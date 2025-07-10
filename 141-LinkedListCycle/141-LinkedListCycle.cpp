// Last updated: 7/11/2025, 12:09:58 AM
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
    bool hasCycle1(ListNode *head) {
        unordered_map <ListNode*,bool> map;
        ListNode* temp=head;
        while(temp!=NULL){
            if(map[temp]==true){
                return true;
            }
            else{
                map[temp]=true;
            }
            temp=temp->next;
        }
        return false;
    }
    bool hasCycle(ListNode *head){
        ListNode *slow =head;
        ListNode *fast =head;

        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
                if(slow==fast){
                return true;
            }
            }

        }
        return false;
    }
};