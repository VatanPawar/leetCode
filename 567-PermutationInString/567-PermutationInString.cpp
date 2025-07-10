// Last updated: 7/11/2025, 12:07:41 AM
class Solution {
public:
    bool checkInclusion(string s1, string s) {
        if(s1.length()>s.length()){return 0;}
        unordered_map<char,int>mp;
        int i,j,k;
        i=0;j=0;k=s1.size();
        for(auto it:s1){
            mp[it]++;
        }

        int count=mp.size();

        while(j<s.size()){
            //
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count--;
                }
            }

            //
            if(j-i+1<k){
                j++;
            }
            //slide the window
            else if(j-i+1==k){
                if(count==0){
                    return true;
                }

                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]==1){
                        count++;
                    }
                }
                i++;j++;
            }
        }
        return 0;
    }
};