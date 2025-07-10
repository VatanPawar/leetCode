// Last updated: 7/11/2025, 12:11:25 AM
class Solution {
public:
    void solve(long long x,long long &ans){
        if(x<0){
            x*=-1;
        }
        while(x>0){
            ans=ans*10 + x%10;
            x/=10;
        }
    }
    int reverse(long long x) {
        if(x>INT_MAX || x<INT_MIN){
            return 0;
        }
        long long ans=0;
        solve(x,ans);
        if(ans>INT_MAX || ans<INT_MIN){
            return 0;
        }
        if(x<0){
        return ans*-1;
        }
        return ans;   
        
        }
};