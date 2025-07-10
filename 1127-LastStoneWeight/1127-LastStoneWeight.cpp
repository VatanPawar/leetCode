// Last updated: 7/11/2025, 12:05:48 AM
class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        priority_queue<int>pq;

        for(auto it:nums){
            pq.push(it);
        }

        while(pq.size()>1){
            int temp1=pq.top();
            pq.pop();
            int temp2=pq.top();
            pq.pop();
            if(temp1!=temp2){
                pq.push(temp1-temp2);
            }
        }
        if(pq.size()==1){
            return pq.top();
        }
        return 0;
    }
};