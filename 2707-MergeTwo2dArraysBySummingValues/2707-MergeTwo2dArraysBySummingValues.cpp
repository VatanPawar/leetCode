// Last updated: 7/11/2025, 12:03:15 AM
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int i=0;
        int j=0;
        while(i<nums1.size()&&j<nums2.size()){
            vector<int>temp(2,-1);
            if(nums1[i][0]==nums2[j][0]){
                temp[0]=nums1[i][0];
                temp[1]=nums1[i][1]+nums2[j][1];
                ans.push_back(temp);
                i++;j++;
            }
            else if(nums1[i][0]<nums2[j][0]){
                temp[0]=nums1[i][0];
                temp[1]=nums1[i][1];ans.push_back(temp);
                i++;
            }
             else if(nums1[i][0]>nums2[j][0]){
                temp[0]=nums2[j][0];
                temp[1]=nums2[j][1];ans.push_back(temp);
                j++;
            }

        }
        while(i<nums1.size()){
           vector<int>temp(2,-1);
                temp[0]=nums1[i][0];
                temp[1]=nums1[i][1];
                i++;
             ans.push_back(temp);
  

        }
         while(j<nums2.size()){
           vector<int>temp(2,-1);
                temp[0]=nums2[j][0];
                temp[1]=nums2[j][1];
                j++;
            ans.push_back(temp);

        }
        return ans;
    }
};