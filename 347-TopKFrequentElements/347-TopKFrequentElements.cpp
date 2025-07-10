// Last updated: 7/11/2025, 12:08:42 AM
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq ; //freq,number
        priority_queue<pair<int,int>>pq;
        for(auto it:nums){
            freq[it]++;
        }
        for(auto it:freq){
            pq.push({it.second,it.first});
        }
        vector<int>ans;
        while(k--){
            ans.push_back(pq.top().second);pq.pop();
        }
        return ans;
    }
};