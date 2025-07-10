// Last updated: 7/11/2025, 12:03:39 AM
class Solution {
public:
    char repeatedCharacter(string s) {
           bitset<26> bit; 

        for (char it : s) {
            bit[it-'a'] =!bit[it-'a'];
            if(bit[it-'a']==0){
                return it;
            }
        }
        return 'x';

    }
};