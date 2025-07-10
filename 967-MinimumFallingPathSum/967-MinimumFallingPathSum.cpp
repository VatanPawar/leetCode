// Last updated: 7/11/2025, 12:06:16 AM
class Solution {
public:
vector<vector<int>>arr;
unordered_map<int,unordered_map<int,int>>t;
    int solve(int i,int j,int s){
        int m=arr.size();
        int n=arr[0].size();
        if(s==0 && i==m-1){
            return arr[i][j];
        }
        if(s<0 || j<0||j>=n ||i>=m){
            return 0;
        }
        if(t[i].find(j)!=t[i].end()){
            return t[i][j];
        }
        if(j==0){
            
            int temp1=solve(i+1,j,s-1);
            int temp2=solve(i+1,j+1,s-1);
            int temp=min(temp1,temp2);
             
                return t[i][j]=arr[i][j]+temp;

            
        }
        if(j==n-1){
            int temp1=solve(i+1,j,s-1);
            int temp2=solve(i+1,j-1,s-1);
            int temp=min(temp1,temp2);
          
                return t[i][j]=arr[i][j]+temp;
            
           

        }
            int temp1=solve(i+1,j,s-1);
            int temp2=solve(i+1,j-1,s-1);
            int temp3=solve(i+1,j+1,s-1);
            int temp=min({temp1,temp2,temp3});
            return t[i][j]=arr[i][j]+temp;
         

        
    }


    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans=INT_MAX;
        arr=matrix;
        int m=matrix.size();
        int n=matrix[0].size();
        // t=vector<vector<int>>(m+1,vector<int>(n+1,-1));
        for(int j=0;j<matrix[0].size();j++){
            ans=min(ans,solve(0,j,matrix.size()));
        }
        return ans;
    }
};