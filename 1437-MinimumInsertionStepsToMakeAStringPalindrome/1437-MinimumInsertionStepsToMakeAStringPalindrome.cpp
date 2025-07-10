// Last updated: 7/11/2025, 12:05:16 AM
class Solution {
public:
vector<vector<int>>t;
int solve(int m,int n,string &s1,string &s2){
    if(m==0&&n==0){
        return 0;
    }
    if(m==0||n==0){
        return 0;
    }
    if(t[m][n]!=-1){
        return t[m][n];
    }

    if(s1[m-1]==s2[n-1]){
        return t[m][n]=1+solve(m-1,n-1,s1,s2);
    }
    else{
        return t[m][n]=max(solve(m-1,n,s1,s2),solve(m,n-1,s1,s2));
    }
  
}
    int minInsertions(string s) {

        //answer=size-lcs(s,reverse(s))
        int m=s.size();
        t=vector<vector<int>>(m+1,vector<int>(m+1,-1));

        string s2=s;
        reverse(s2.begin(),s2.end());
        if(s==s2){
            return 0;
        }
        return m-solve(m,m,s,s2);
    }
};