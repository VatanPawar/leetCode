// Last updated: 7/11/2025, 12:02:58 AM
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>>pq;

        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        for(int i=0;i<nums.size();i=i+2){
            int temp2=pq.top();
            pq.pop();
            int temp1=pq.top();
            pq.pop();
            ans.push_back(temp1);
            ans.push_back(temp2);
        }
        return ans;
    }
};