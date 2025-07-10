// Last updated: 7/11/2025, 12:05:26 AM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_map<int,int>check;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:mp){
            if(check[it.second]==1){
                return 0;
            }
            check[it.second]++;
        }
        return 1;
    }
};