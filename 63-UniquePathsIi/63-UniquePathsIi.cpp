// Last updated: 7/11/2025, 12:10:49 AM
class Solution {
public:
vector<vector<int>>arr;
vector<vector<int>>t;
int solve(int m,int n){
    if(m==0&&n==0){
        return 1;
    }
    if(m<0&&n<0){
        return 0;
    }
    if(t[m][n]!=-1){
        return t[m][n];
    }
    int left=0;
    int right=0;
    if(n-1>=0&&arr[m][n-1]==0){
        left=solve(m,n-1);
    }
    if(m-1>=0&&arr[m-1][n]==0){
        right=solve(m-1,n);
    }
    return t[m][n]=left+right;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        arr=obstacleGrid;
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        t=vector<vector<int>>(m+1,vector<int>(n+1,-1));
        if(obstacleGrid[m-1][n-1]==1){
            return 0;
        }
        return solve(m-1,n-1);
        
        
    }
};