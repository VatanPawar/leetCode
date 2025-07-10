// Last updated: 7/11/2025, 12:05:59 AM
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& arr) {
        vector<bool>final(arr.size());

        uint8_t ans=0;
        for(int i=0;i<arr.size();i++){ 
            ans=((ans<<1 | arr[i]))%5;
            final[i]=(ans%5==0);
        }
        return final;
    }
};