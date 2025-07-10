// Last updated: 7/11/2025, 12:09:18 AM
class Solution {
public:
    bool isPowerOfTwo(int n) {
       
        return (n>0)&&((n&(n-1))==0);
    }
};