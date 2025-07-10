// Last updated: 7/11/2025, 12:07:58 AM
class Solution {
public:
int lcs(string x,string y){
    int n=x.size();
    int m=y.size();
    vector<vector<int>>t(n+1,vector<int>(m+1,-1));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0||j==0){
                t[i][j]=0;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(x[i-1]==y[j-1]){
                t[i][j] = 1+t[i-1][j-1];
            }
            else{
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    return t[n][m];
}
    int longestPalindromeSubseq(string s) {
        string x=s;
        reverse(s.begin(),s.end());
        // cout<<s;
        return lcs(s,x);
    }
};