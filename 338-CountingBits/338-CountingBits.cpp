// Last updated: 7/11/2025, 12:08:48 AM
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ans.push_back(__builtin_popcount(i));
        }
        return ans;
    }
};