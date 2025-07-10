// Last updated: 7/11/2025, 12:05:50 AM
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        for(auto it:chars){
            mp[it]++;
        }
        int ans=0;
        for(int i=0;i<words.size();i++){
            unordered_map<char,int>temp=mp;
            bool flag=true; 
            for(auto it:words[i]){
                if(mp[it]==0){
                    flag=false;
                }
                mp[it]--;
            }
            if(flag){
                ans+=words[i].size();
            }
            mp=temp;
        }
        return ans;
    }
};