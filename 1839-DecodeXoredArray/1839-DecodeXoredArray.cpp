// Last updated: 7/11/2025, 12:04:34 AM
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
        ans.push_back(first);
        
        for(auto it:encoded){
            first^=it;
            ans.push_back(first);
        }
        return ans;
    }
};