// Last updated: 7/11/2025, 12:02:08 AM
class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int ans=0;
        for(auto it:commands){
            if(it=="DOWN"){
                ans+=n;
            }
            else if(it=="UP"){
                ans-=n;
            }
            else if(it=="RIGHT"){
                ans+=1;
            }
            else {
                ans-=1;
            }
        }
        return ans;
    }
};