// Last updated: 7/11/2025, 12:02:57 AM
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
       vector<int>m1(101,0);
        for(auto it:nums1){
            m1[it]=1;
        }

        vector<int>m2(101,0);
        for(auto it:nums2){
            m2[it]=1;
        }
        int a=0;
        int b=0;
        for(auto it:nums1){
            if(m2[it]==1){
                a++;
            }
        }
        for(auto it:nums2){
            if(m1[it]==1){
                b++;
            }
        }
        return {a,b};
    }
};