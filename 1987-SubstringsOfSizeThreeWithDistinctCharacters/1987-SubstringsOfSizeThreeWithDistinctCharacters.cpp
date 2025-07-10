// Last updated: 7/11/2025, 12:04:18 AM
class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0;int j=0;
        int k=3;
        int count=0;
        while(j<s.size()){
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(s[i]!=s[i+1] && s[i+1]!=s[i+2] &&s[i]!=s[i+2]){
                    count++;
                }
                i++;
            }
        }
        return count;
    }
};