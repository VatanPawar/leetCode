// Last updated: 7/11/2025, 12:02:19 AM
class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        bitset<1> b;  // can store values from 00 to 11 (0 to 3)
        
        for (auto it : nums) {
           if((it&1)==0){

                    if(b[0]==1){
                        return 1;
                        }
                b[0]=1;
           }
           
        }
        return false;
    }
};
