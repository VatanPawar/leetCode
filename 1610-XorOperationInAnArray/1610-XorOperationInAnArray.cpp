// Last updated: 7/11/2025, 12:04:50 AM
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^(i*2+start);
        }
        return ans;
    }
};