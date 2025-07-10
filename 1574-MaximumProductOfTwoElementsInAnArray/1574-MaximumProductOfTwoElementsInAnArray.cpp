// Last updated: 7/11/2025, 12:04:51 AM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto it:nums){
            pq.push(it);
        }
        int temp=pq.top();
        pq.pop();
        return (temp-1)*(pq.top()-1);
    }
};