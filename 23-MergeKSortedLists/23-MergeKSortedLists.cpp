// Last updated: 7/11/2025, 12:11:17 AM
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

 class compare{
    public:
        bool operator()(ListNode* a,ListNode* b){
            return a->val > b->val;
        }
 };

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
            priority_queue<ListNode*,vector<ListNode*>,compare>pq;
            ListNode* head=NULL;
            ListNode*tail =NULL;

            //process first k elements
            //hr list ka pehla element pq me insert karna hain

            int totalRows=lists.size();
            for(int row=0;row<totalRows;row++){
                ListNode* temp = lists[row];
                if(temp!=NULL){
                    //if its a valid node
                    pq.push(temp);
                } 
                
            }

            //main logic
            while(!pq.empty()){
                //front nikalo
                ListNode* front = pq.top();
                pq.pop();
                //ans me insert karo
                if(head==NULL && tail==NULL){
                    //it means i am inserting the first node in LL
                    head = front;
                    tail = front;
                   
                }
                else{
                    //it means its not the first node
                    tail->next=front;
                    tail=front;

                }

                //agar aage node hain toh pq me insert karo
                if(tail->next!=NULL){
                        pq.push(tail->next);
                }




            }
        return head;
    }
};