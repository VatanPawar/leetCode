// Last updated: 7/11/2025, 12:11:19 AM
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
    ListNode* mergeTwoLists1(ListNode* list1, ListNode* list2) {
        ListNode* result = new ListNode(5); 
        ListNode* curr = result; 
        while (list1 || list2){
            if (list1 && list2){
                if (list1->val < list2->val){
                    curr->next = new ListNode(list1->val); 
                    curr = curr->next;
                    list1 = list1->next;  
                } else {
                    curr->next = new ListNode(list2->val); 
                    curr = curr->next;
                    list2 = list2->next; 
                }
            } else if (list1){
                curr->next = new ListNode(list1->val); 
                curr = curr->next; 
                list1 = list1->next; 
            } else {
                curr->next = new ListNode(list2->val); 
                curr = curr->next; 
                list2 = list2->next; 
            }
        }
        return result->next; 
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* left=list1;
       ListNode* right=list2;
        ListNode* ans=new ListNode(-1);
        ListNode* myptr=ans;
        while(left&&right){
                if(left->val<=right->val){
                myptr->next=left;
                myptr=left;
                left=left->next;
                
            }
            else{
                myptr->next=right;
                myptr=right;
                right=right->next;
            }
        }
        while(left){
            myptr->next=left;
            myptr=left;
            left=left->next;
        }
        while(right){
            myptr->next=right;
            myptr=right;
            right=right->next;
        }
        return ans->next;
        
    }
};