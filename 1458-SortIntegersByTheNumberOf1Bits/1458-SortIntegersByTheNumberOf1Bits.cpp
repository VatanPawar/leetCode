// Last updated: 7/11/2025, 12:05:12 AM
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        for(auto it:arr){
            pq.push({__builtin_popcount(it),it});
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};