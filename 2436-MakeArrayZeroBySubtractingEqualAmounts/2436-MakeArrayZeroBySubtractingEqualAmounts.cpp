// Last updated: 7/11/2025, 12:03:38 AM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
         priority_queue<int,vector<int>,greater<int>>pq2;
        for(auto it:nums){
            if(it!=0){
                pq.push(it);
            }
        }
        int c=0;

        while(!pq.empty()){
            int small=pq.top();
            while(!pq.empty()){
                pq2.push(pq.top()-small);
                pq.pop();
            }
            while(!pq2.empty()){
                if(pq2.top()>0){pq.push(pq2.top());}
                pq2.pop();
            }

            c++;
        }
        return c;
    }
};