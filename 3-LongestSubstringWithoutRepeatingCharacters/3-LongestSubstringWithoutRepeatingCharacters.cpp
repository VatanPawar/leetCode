// Last updated: 7/11/2025, 12:11:29 AM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;int ans=0;
        unordered_map<char,int>mp;
        while(j<s.size() && i<s.size()){
            
            mp[s[j]]++;;
            while(mp[s[j]]>1){
                mp[s[i]]--;
                i++;
            }
             if(mp[s[j]]==1){
                
                ans=max(ans,j-i+1);
            }
            j++;
            
           

        }
        return ans;
    }
};