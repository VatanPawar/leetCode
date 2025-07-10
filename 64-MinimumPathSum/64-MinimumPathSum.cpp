// Last updated: 7/11/2025, 12:10:48 AM
class Solution {
public:
vector<vector<int>>t;
    int solve(int m,int n,vector<vector<int>>&grid){
        if(m==0&&n==0){
            return grid[0][0];
        }
       if(t[m][n]!=-1){
        return t[m][n];
       }
        int left=INT_MAX;
        int top=INT_MAX;
        if(n-1>=0&&(solve(m,n-1,grid)+grid[m][n])<INT_MAX){
             left=min(grid[m][n]+solve(m,n-1,grid),INT_MAX);
        }
        
        if(m-1>=0&&(solve(m-1,n,grid)+grid[m][n])<INT_MAX){
             top=min(grid[m][n]+solve(m-1,n,grid),INT_MAX);
        }
       
         
        

        return t[m][n]=(int)min(left,top);
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        int m=grid.size();
        int n=grid[0].size();
        t=vector<vector<int>>(m+1,vector<int>(n+1,-1));
        return solve(m-1,n-1,grid);
    }
};