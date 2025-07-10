// Last updated: 7/11/2025, 12:11:30 AM
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
    ListNode* solve(ListNode* a,ListNode*b,int &c){
        if(!a&&!b){
            return a;
        }
        else if(a &&!b){
            int adata=a->val;
            int bdata=0;
            int temp=adata + bdata +c;
            int digit=temp%10;
            c=temp/10;
            a->val=digit;
            return solve(a->next,b,c);

        }
         else{
            int adata=a->val;
            int bdata=b->val;
            int temp=adata + bdata +c;
            int digit=temp%10;
            c=temp/10;
             a->val=digit;
            return solve(a->next,b->next,c);

        }


    }

    ListNode* getTail(ListNode *a){
        while(a->next!=NULL){
            a=a->next;

        }
        return a;
    }
    int getLength(ListNode* &a){
        ListNode* temp=a;
        int count=0;
        while(temp){
            temp=temp->next;
            count++;
        }
        return count;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* a=l1;
      ListNode* b=l2;
      int alen=getLength(l1);
      int blen=getLength(l2);
      if(blen>alen){
        return addTwoNumbers(l2,l1);
      }
        int c=0;
        solve(a,b,c);
        if(c!=0){
            ListNode* newNode = new ListNode(c);
            newNode->next=NULL;

            ListNode* aTail = getTail(l1);
            aTail->next=newNode;
        }
        return a;


    }
};