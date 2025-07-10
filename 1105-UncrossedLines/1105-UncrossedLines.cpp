// Last updated: 7/11/2025, 12:05:51 AM
class Solution {
public:
    vector<vector<int>>t;
    int solve(int n,int m,vector<int>&nums1,vector<int>&nums2){
        if(n==0||m==0){
            return 0;
        }
        if(t[n][m]!=-1){
            return t[n][m];
        }
        int exc=0+solve(n-1,m-1,nums1,nums2);
        int inc=0;

        if(nums1[n-1]==nums2[m-1]){
            inc=1+solve(n-1,m-1,nums1,nums2);
        }
        else{
            int temp1=solve(n-1,m,nums1,nums2);
            int temp2=solve(n,m-1,nums1,nums2);
            inc=max(temp1,temp2);
        }

        return t[n][m]=max(inc,exc);
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+1;
        int m=nums2.size()+1;
        t=vector<vector<int>>(n+1,vector<int>(m+1,-1));
        return solve(nums1.size(),nums2.size(),nums1,nums2);
    }
};