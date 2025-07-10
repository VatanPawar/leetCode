// Last updated: 7/11/2025, 12:05:58 AM
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
vector<int> solve(vector<int> a){
    vector<int>ans(a.size(),0);
    stack<int>st;
    for(int i=a.size()-1;i>=0;i--){
    if(st.empty()){st.push(a[i]);}
    else{
            while(!st.empty() && st.top()<=a[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            st.push(a[i]);
        }
    }
    return ans;
}
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>a;
        while(head){
            a.push_back(head->val);
            head=head->next;
        }
        return solve(a);
    }
};