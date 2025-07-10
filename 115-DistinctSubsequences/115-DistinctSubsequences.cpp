// Last updated: 7/11/2025, 12:10:15 AM
class Solution {
public:
vector<vector<int>>T;
    int solve(int n,int m,string &s,string &t){
        if(m==0){
            return 1;
        }
        if(n==0){
            return 0;
        }
        if(T[n][m]!=-1){
            return T[n][m];
        }
        if(s[n-1]==t[m-1]){
            int take=solve(n-1,m-1,s,t);
            int notTake=solve(n-1,m,s,t);
            return T[n][m]=take+notTake;
        }
        else{
            return T[n][m]=solve(n-1,m,s,t);
        }
    }
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        T=vector<vector<int>>(n+1,vector<int>(m+1,-1));
        return solve(n,m,s,t);
    }
};