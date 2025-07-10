// Last updated: 7/11/2025, 12:06:02 AM
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int temp=0;
        int i=n;
        while(n>0){
           temp=(temp<<1)|1;
            n=n>>1;
        }
        return (int)temp^i;
    }
};