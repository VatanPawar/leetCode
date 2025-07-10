// Last updated: 7/11/2025, 12:11:15 AM
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
int getLength(ListNode* head){
    int i=0;
    ListNode* temp=head;
    while(temp!=NULL){
        i++;temp=temp->next;
    }
    return i;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        //LL is empty
        if(head==NULL) {
            return head;
        }

        if(head->next==NULL){
            return head;
        }

        int len=getLength(head);
        if(len<k){
            return head;
        }

        //1case
        int position=0;
        
        ListNode* prev=NULL;
        ListNode* curr=head;

        while(position < k){
        ListNode* frwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=frwd;
        position++;
        }
        if(curr!=NULL){
            ListNode* recursionHead = reverseKGroup(curr,k);
            head->next=recursionHead;
        }


        return prev;

    }
};