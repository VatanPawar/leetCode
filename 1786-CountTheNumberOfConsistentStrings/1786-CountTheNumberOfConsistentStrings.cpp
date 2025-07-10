// Last updated: 7/11/2025, 12:04:37 AM
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        for(auto it:allowed){
            int x=1<<(it-'a');
            ans|=x;
        }
        int count=0;
        for(auto itO:words){
            bool flag=true;
            for(auto it:itO){
            int temp=(ans>>(it-'a'))&1;

            if(temp==0){
                flag=false;
                break;
            }
            }
            if(flag){
                count++;
            }
        }
        return count;
    }
};