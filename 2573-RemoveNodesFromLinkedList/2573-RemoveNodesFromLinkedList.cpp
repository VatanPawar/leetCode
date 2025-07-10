// Last updated: 7/11/2025, 12:03:29 AM
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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>st,st2;
        while(head){
            while(!st.empty()&&st.top()->val<head->val){
                st.pop();
            }
            st.push(head);
            head=head->next;
        }
        while(!st.empty()){
            st2.push(st.top());st.pop();
        }

        // cout<<"size of 1,2 : "<<st.size()<<" "<<st2.size()<<endl;;

        ListNode* ans=st2.top();

        st2.pop();
        ListNode* temp=ans;
        while(!st2.empty()){
            temp->next=st2.top();
            st2.pop();
            temp=temp->next;
        }
        return ans;
    }
};