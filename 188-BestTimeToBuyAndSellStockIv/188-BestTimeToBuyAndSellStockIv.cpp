// Last updated: 7/11/2025, 12:09:41 AM
class Solution {
public:
vector<vector<vector <int>>>t;
  int solve(int n,int i,int preBuy,vector<int>&arr){
        if(i==arr.size()||n==0){
            return 0;
        }
        if(t[n][i][preBuy]!=-1){
            return t[n][i][preBuy];
        }
        if(preBuy==0){
            int buy=-arr[i]+solve(n,i+1,1,arr);
            int noBuy=solve(n,i+1,0,arr);
            return t[n][i][preBuy]=max(buy,noBuy);
        }
        else {
            int sell=arr[i]+solve(n-1,i+1,0,arr);
            int noSell=solve(n,i+1,1,arr);
            return t[n][i][preBuy]=max(sell,noSell);
        }
    }
    // int maxProfit(vector<int>& prices) {
    //     int n=prices.size();
    //     t=vector<vector<vector <int>>>(3,vector<vector<int>>(n+1,vector<int>(2,-1)));
    //     return solve(2,0,0,prices);
    // }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
          t=vector<vector<vector <int>>>(k+1,vector<vector<int>>(n+1,vector<int>(2,-1)));
           return solve(k,0,0,prices);
    }
};