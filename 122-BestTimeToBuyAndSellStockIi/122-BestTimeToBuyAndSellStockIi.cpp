// Last updated: 7/11/2025, 12:10:10 AM
class Solution {
public:
    unordered_map<int,unordered_map<int,int>>t;
    int solve(int holding,int i,int n,vector<int>&arr){
        if(n<0||i==arr.size()){
            return 0;
        }
        if(t[i].find(holding)!=t[i].end()){
            return t[i][holding];
        }
        if(holding==0){
            int buy=-arr[i]+solve(1,i+1,n-1,arr);
            int noBuy=solve(0,i+1,n,arr);
            return t[i][holding]=max(buy,noBuy);
        }
        else{
            int sell=arr[i]+solve(0,i,n+1,arr);
            int noSell=solve(0,i+1,n,arr);
            return t[i][holding]=max(sell,noSell);

        }
    }
    int maxProfit(vector<int>& prices) {
        return solve(0,0,1,prices);
    }
};