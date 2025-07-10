// Last updated: 7/11/2025, 12:07:16 AM
class Solution {
public:
vector<vector<int>>t;
    int solve(int n,int m,string &s1,string &s2){
        if(n==0||m==0){
            int x=0,y=0;
            for(int i=0;i<n;i++){
                x+=s1[i];
            }
            for(int i=0;i<m;i++){
                y+=s2[i];
            }
            return max(x,y);
        }
        if(t[n][m]!=-1){
            return t[n][m];
        }
        if(s1[n-1]==s2[m-1]){
            return t[n][m]=solve(n-1,m-1,s1,s2);
        }
        return t[n][m]=min((s1[n-1]+solve(n-1,m,s1,s2)),(s2[m-1]+solve(n,m-1,s1,s2)));

    }
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        t=vector<vector<int>>(n+1,vector<int>(m+1,-1));
        return solve(n,m,s1,s2);
    }
};