// Last updated: 7/11/2025, 12:07:01 AM
class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
          if(s.size()==1){
            return {1};
        }
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i;
        }
        
        char curr=s[0];
        int lastOcc=0;
        int x=0;
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            curr=s[i];
            lastOcc=max(lastOcc,mp[curr]);
            x++;
            
            if(lastOcc==i){
                ans.push_back(x);
                x=0;
                lastOcc=0;
                
            }
        }
        return ans;
      
    }
};