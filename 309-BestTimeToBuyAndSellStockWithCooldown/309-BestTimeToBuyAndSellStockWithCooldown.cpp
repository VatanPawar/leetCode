// Last updated: 7/11/2025, 12:08:57 AM
class Solution {
public:
vector<vector<int>>t;
int solve(int i,bool flag,int buyIdx,vector<int>&arr){
    if(i==arr.size()){
        return 0;
    }
    if(flag==true){
        return solve(i+1,false,buyIdx,arr);
    }
    if(t[i][buyIdx+1]!=-1){
        return t[i][buyIdx+1];
    }
    if(buyIdx==-1){
        int buy=solve(i+1,false,i,arr);
        int noBuy=solve(i+1,false,-1,arr);
        return t[i][buyIdx+1]=max(buy,noBuy);
    }
    else{
        int sell=arr[i]-arr[buyIdx]+solve(i+1,true,-1,arr);
        int noSell=solve(i+1,false,buyIdx,arr);
        return t[i][buyIdx+1]=max(sell,noSell);
    }
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        t=vector<vector<int>>(n+1,vector<int>(n+1,-1));
        return solve(0,false,-1,prices);
    }
};