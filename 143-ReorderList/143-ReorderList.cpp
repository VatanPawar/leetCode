// Last updated: 7/11/2025, 12:09:55 AM
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
    void reorderList(ListNode* head1) {
        ListNode* head=head1;
        stack<ListNode*>st;
        int n=getLen(head);
        int half = n/2;
        if(n%2!=0){
            half=half+1;
        }
        while(half--){
            head=head->next;
        }
        
        
        while(head!=NULL){
            ListNode* temp=head;
            
            st.push(temp);
            head=head->next;
            
        }
       
        ListNode *root=head1;

        //some error here
        while(!st.empty()){
            ListNode*temp = head1->next;
            head1->next=st.top();
            st.top()->next=temp;
            head1=temp;
            st.pop();
        }
         if (head1) {
            head1->next = NULL; // Ensure the last node points to NULL
        }
        head1=root;
       
        
        
        

    }
};