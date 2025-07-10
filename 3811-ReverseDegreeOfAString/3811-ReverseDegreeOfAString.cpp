// Last updated: 7/11/2025, 12:01:53 AM
class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            int temp= (26-(s[i]-'a'))*(i+1);
            // cout<<temp<<endl;
            ans+= temp;
            
        }
        return ans;
    }
};