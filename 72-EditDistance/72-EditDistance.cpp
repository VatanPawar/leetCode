// Last updated: 7/11/2025, 12:10:41 AM
class Solution {
public:
vector<vector<int>>t;
int solve(int i,int j,string &s1,string &s2){
    
    if((i==s1.length())||(j==s2.length())){
        return max(s1.length()-i,s2.length()-j);
    }
  
    // if(j>=s2.length()){
    //     return s1.length()-i;       //mistaken here
    // }
    // if(i>=s1.length()){
    //     //
    //     return (s2.length()-j);        //mistaken here
    // }
    if(s1.length()==0||s2.length()==0){
        return max(s1.length(),s2.length());
    }
      if(t[i][j]!=-1){
        return  t[i][j];
    }
    if(s1[i]==s2[j]){
        return t[i][j]=solve(i+1,j+1,s1,s2);
    }
    else{
        int ins=1+solve(i,j+1,s1,s2);       //mistaken here
        int del=1+solve(i+1,j,s1,s2);
        int rep=1+solve(i+1,j+1,s1,s2);
        return  t[i][j]=min({ins,del,rep});
    }
    return 0;
}
    int minDistance(string s1, string s2) {
        int m=s1.length(),n=s2.length();
        t=vector<vector<int>>(m+1,vector<int>(n+1,-1));
        return solve(0,0,s1,s2);
    }
};