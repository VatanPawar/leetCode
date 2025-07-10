// Last updated: 7/11/2025, 12:04:58 AM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& arr, int x) {
        vector<bool>ans(arr.size());
        int maxi=0;
        for(auto it:arr){
            maxi=max(maxi,it);
        }
        for(int i=0;i<arr.size();i++){
            ans[i]=(arr[i]+x>=maxi);
        }
        return ans;
    }
};