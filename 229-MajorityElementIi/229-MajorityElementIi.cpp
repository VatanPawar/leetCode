// Last updated: 7/11/2025, 12:09:20 AM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int x=nums.size()/3;
  int count=0;
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        vector<int>ans;
        for(auto it:nums){
            if(mp[it]>x){
               ans.push_back(it);
                mp[it]=0;
            }
        }
        return ans;
        }}
        
;