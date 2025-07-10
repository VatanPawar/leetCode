// Last updated: 7/11/2025, 12:08:14 AM
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // int num1=0;
        // int num2=0;      //assumed l2 is bigger iin size
        vector<int>num1,num2;
        ListNode* o=l1;
        ListNode* t=l2;
        while(l1){
           num1.push_back(l1->val);
            l1=l1->next;
        }
        while(l2){
            // num2=l2->val+num2*10; 
            num2.push_back(l2->val);
            l2=l2->next;
        }
        int carry=0;
        int e1=num1.size()-1;
        int e2=num2.size()-1;
        // size of e1 is small
        if(e1>e2){
            return addTwoNumbers(t,o);
        }
        vector<int>sum(e2+1);
        while(e1>=0 && e2>=0){
            sum[e2]=(num1[e1]+num2[e2]+carry)%10;
            carry=(num1[e1]+num2[e2]+carry)/10;
            e1--;e2--;
        }
        while(e2>=0){
          sum[e2]=(num2[e2]+carry)%10;
            carry=(num2[e2]+carry)/10;
            e2--;
        }
      
        for(auto it:sum){
            cout<<it<<" ";
        }
        // ListNode* ans=new ListNode(-1);
        // ListNode* root=ans;
        if(carry!=0){
            ListNode* ans=new ListNode(carry);
            
            ListNode* root=ans;
            ans->next=t;
            ans=ans->next;
            for(int i=0;i<sum.size();i++){
                ans->val=sum[i];
                ans=ans->next;
            }
            return root;
            
        }
         ListNode* ans=t;
            
            ListNode* root=ans;
         
        
            for(int i=0;i<sum.size();i++){
                ans->val=sum[i];
                ans=ans->next;
            }
            return root;
        
        
        // if(sum==0 || sum/10==0){
        //     ans->val=sum;
        //     return ans;
        // }
        // cout<<sum<<endl;
       
//         for(int i=n-1;i>=0;i--){
//             ans->val=temp[i];
//             if(i-1>=0){
//             ListNode*nxt=new ListNode(0);
//             ans->next=nxt;}
//             ans=ans->next;
//         }
        
        return l1;
    }
};