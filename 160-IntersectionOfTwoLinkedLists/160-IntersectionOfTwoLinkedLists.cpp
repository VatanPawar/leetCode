// Last updated: 7/11/2025, 12:09:48 AM
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
int giveLength(ListNode *&given){
    int i=0;
    ListNode* head=given;
    while(head!=NULL){
        i++;head=head->next;
    }
    return i;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=giveLength(headA);
        int l2=giveLength(headB);
        if(l1<l2){
            return getIntersectionNode(headB, headA);
        }

        int dif=l1-l2;
        ListNode* j=headA;
        ListNode*i=headB;
        while(dif--){
            j=j->next;
        }

       if(i==j){
        return i;
       }
        while(i!=NULL && j!=NULL){
            if(i->next==j->next){
                return i->next;
            }
            i=i->next;j=j->next;
        }
        return NULL;
    }
};