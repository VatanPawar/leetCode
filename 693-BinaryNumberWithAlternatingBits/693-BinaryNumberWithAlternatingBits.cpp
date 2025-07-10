// Last updated: 7/11/2025, 12:07:17 AM
class Solution {
public:
    bool hasAlternatingBits(int n) {
        while(n>1){
            int temp=n>>1;
            if((temp&1) == (n&1)){
                cout<<n<<endl;
                return 0;
            }
            n=n>>1;
        }
        return 1;
    }
};