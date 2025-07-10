// Last updated: 7/11/2025, 12:04:00 AM
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
     
        vector<int>ans(k,-1);
        priority_queue<pair<int,int>>pq;//number,its index
        priority_queue<pair<int,int>>pq2; //index,number
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        int k2=k;
        while(k2--){
            pair temp=pq.top();
            pq2.push({temp.second,temp.first});
            pq.pop();
        }
        int i=1;
         while(k--){
           pair temp=pq2.top();
           pq2.pop();
           ans[ans.size()-i]=(temp.second);
           i++;
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }
};