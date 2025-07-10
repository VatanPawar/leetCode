// Last updated: 7/11/2025, 12:10:57 AM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto it:strs){
            string temp = it;
            sort(it.begin(),it.end());
            mp[it].push_back(temp);
        }
        vector<vector<string>>ans;
        for(auto it:mp){
            vector<string>t=it.second;
            ans.push_back(t);
        }
        return ans;;
    }
};