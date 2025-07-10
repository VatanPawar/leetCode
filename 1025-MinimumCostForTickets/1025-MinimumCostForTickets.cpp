// Last updated: 7/11/2025, 12:06:09 AM
class Solution {
public:
vector<vector<int>>t;
    int solve(int n,int day,vector<int>arr,vector<int>costs){
        if(n<=0){
            return 0;
        }
        if(t[n][day]!=-1){
            return t[n][day];
        }
        if(arr[n-1]>day){
            return solve(n-1,day,arr,costs);
        }
        int temp1=costs[0]+solve(n-1,max(arr[n-1]-1,0),arr,costs);
          int temp2=costs[1]+solve(n-1,max(0,arr[n-1]-7),arr,costs);
            int temp3=costs[2]+solve(n-1,max(0,arr[n-1]-30),arr,costs);
            return t[n][day]=min({temp1,temp2,temp3});
        
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        t=vector<vector<int>>(n+5,vector<int>(days[n-1]+5,-1));
        return solve(n,days[n-1],days,costs);
    }
};