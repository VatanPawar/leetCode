// Last updated: 7/11/2025, 12:08:46 AM
class Solution {
public:
    bool solve(int n){
        if(n==0){return 0;}
        if(n==1){return 1;}
        if(n%4!=0){return 0;}
        return solve(n/4);
        
    }
    bool isPowerOfFour(int n) {
        return solve(n);
    }
};