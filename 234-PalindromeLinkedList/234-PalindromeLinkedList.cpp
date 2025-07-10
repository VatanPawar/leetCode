// Last updated: 7/11/2025, 12:09:15 AM
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
int getLen(ListNode* head){
    int count=0;
    while(head){
        count++;
        head=head->next;
    }
    return count;
}
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        int len=getLen(head);
        if(head->next==NULL){
            return 1;
        }
        for(int i=0;i<len/2;i++){
            if(head){
                st.push(head->val);
            }
            head=head->next;
        }
        if((len/2)%2==2){head=head->next;}
        
        while(head){
            if(head->val==st.top()){
                st.pop();
            }
            head=head->next;
        }
        return st.empty();
    }
};