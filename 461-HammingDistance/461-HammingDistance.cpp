// Last updated: 7/11/2025, 12:08:07 AM
class Solution {
public:
    int hammingDistance(int x, int y) {
        int c=0;
        while(x>0 || y>0){
            if((x&1) ^ (y&1) == 1){
                c++;
            }
            x=x>>1;
            y=y>>1;
        }
        return c;
    }
};