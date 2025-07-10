// Last updated: 7/11/2025, 12:09:29 AM
class Solution {
public:
    int findKthLargest2(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<k;i++){
            pq.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(nums[i]>pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
      int ans=-1;
           while(k!=0){
            ans=pq.top();
            pq.pop();
            k--;
           }
        
        return ans;
    }
    
      
};