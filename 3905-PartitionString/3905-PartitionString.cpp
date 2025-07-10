// Last updated: 7/11/2025, 12:01:37 AM
class Solution {
public:
    vector<string> partitionString(string s) {
        unordered_map<string,int>mp;
        string temp="";
        vector<string>ans;
        int j=0;
        while(j<s.size()){
            char ch=s[j];
            // string t=""+ch;
            temp+=ch;
            if(mp[temp]>0){
                j++;
                continue;
            }
            else{
                mp[temp]++;
                ans.push_back(temp);
                temp="";
            }
            j++;
            
        }
        return ans;
    }
};