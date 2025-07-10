// Last updated: 7/11/2025, 12:08:05 AM
class Solution {
public:
    int findComplement(int n) {
        int temp=0;
        int i=0;
        while(n>0){
            if((n&1) ==0){
                temp|=(1<<i);
            }
            i++;
            n=n>>1;
        }
        return temp;
    }
};