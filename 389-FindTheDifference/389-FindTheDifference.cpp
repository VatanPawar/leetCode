// Last updated: 7/11/2025, 12:08:31 AM
class Solution {
public:
    char findTheDifference(string s, string s2t) {
        int t=0;
        for(auto it:s){
            t=t^(it-'a');
        }
        
        for(auto it:s2t){
            t=t^(it-'a');
        }
        return t+'a';
    }
};