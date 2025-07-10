// Last updated: 7/11/2025, 12:08:18 AM
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map <char,int>mp;
        for(auto it:p){
            mp[it]++;
        }
        int k=p.size();
        int count=mp.size();
        int i,j;
        i=0;
        j=0;
        vector<int>ans;
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count--;
                }
            }

            if(j-i+1<k){
                j++;
            }

            else if(j-i+1==k){
                if(count==0){
                    ans.push_back(i);
                }
                //sliding the window
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]==1){
                        count++;
                    }
                }
                i++;j++;
            }
        }
        return ans;

        }
};