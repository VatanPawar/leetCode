// Last updated: 7/11/2025, 12:10:50 AM
class Solution {
public:
vector<vector<int>>t;
    int solve(int m,int n){
        if(m==0&&n==0){
            return 1;
        }
        if(m<0||n<0){
            return 0;
        }
        if(t[m][n]!=-1){
            return t[m][n];
        }
        int up=solve(m-1,n);
        int left=solve(m,n-1);
        return t[m][n]=up+left;
    }
    int uniquePaths(int m, int n) {
        t=vector<vector<int>>(m+1,vector<int>(n+1,-1));
        return solve(m-1,n-1);
    }
};