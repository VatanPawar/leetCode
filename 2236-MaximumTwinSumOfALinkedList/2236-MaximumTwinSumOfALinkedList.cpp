// Last updated: 7/11/2025, 12:03:56 AM
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
    int pairSum(ListNode* head) {
        stack<int>st1;
        stack<int>st2;
      
        int n=0;
        ListNode* temp=head;
        while(temp){
            st1.push(temp->val);
            n++;
            temp=temp->next;
        }
        for(int i=0;i<n/2;i++){
            st2.push(st1.top());
            st1.pop();
        }
        int ans=INT_MIN;
        while(!st1.empty()){
            if(st1.top()+st2.top()>ans){
                ans=st1.top()+st2.top();
            }
            st1.pop();st2.pop();
        }
        return ans;

    }
};