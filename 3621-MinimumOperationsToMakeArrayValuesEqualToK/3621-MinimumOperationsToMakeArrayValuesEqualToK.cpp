// Last updated: 7/11/2025, 12:02:00 AM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int> hash;
        set<int>s;
        int min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>k && hash[nums[i]]==0){
                count++;
            }
            if(nums[i]<min){
                min=nums[i];
            }
            hash[nums[i]]++;
            if(nums[i]<=k){s.insert(nums[i]);}
        }
        if(count==0 && s.size()==1){
            if(nums[0]==k){
                return 0;
            }
        }
        if(min<k){
            return -1;
        }
        return count==0 ? -1:count;
    }
};