// Last updated: 7/11/2025, 12:10:13 AM
class Solution {
public:
unordered_map<int,unordered_map<int,int>>t;
int solve(int i,int j,vector<vector<int>>&arr){
    if(i==arr.size()||j>=arr[i].size()){
        return 0;
    }
    if(t[i].find(j)!=t[i].end()){
        return t[i][j];
    }
    int down=arr[i][j]+solve(i+1,j,arr);
    int downRight=arr[i][j]+solve(i+1,j+1,arr);
    return t[i][j]=min(down,downRight);

}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        return solve(0,0,triangle);
    }
};