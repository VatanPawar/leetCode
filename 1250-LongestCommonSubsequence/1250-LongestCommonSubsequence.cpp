// Last updated: 7/11/2025, 12:05:35 AM
class Solution {
public:
    vector<vector<int>>t;
    
    int solve(int n,int m,string &s1,string &s2){
        if(n==0||m==0){
            return 0;
        }
        if(t[m][n]!=-1){
            return t[m][n];
        }
        if(s1[n-1]==s2[m-1]){
            return t[m][n]=1+solve(n-1,m-1,s1,s2);
        }
        else{
            return t[m][n]=max(solve(n-1,m,s1,s2),solve(n,m-1,s1,s2));
        }
        return 0; //never comess here
    }

    int longestCommonSubsequence(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        t=vector<vector<int>>(m+1,vector<int>(n+1,-1));
        return solve(n,m,s1,s2);
    }
};