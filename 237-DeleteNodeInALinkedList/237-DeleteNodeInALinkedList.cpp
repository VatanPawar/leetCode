// Last updated: 7/11/2025, 12:09:11 AM
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
    void deleteNode(ListNode* root) {
        if(root==NULL){
            return ;
        }
        if(root->next){
            root->val=root->next->val;
            if(root->next->next==NULL){
                root->next=NULL;
            }
        }
     
        
    
        deleteNode(root->next);
    }
};