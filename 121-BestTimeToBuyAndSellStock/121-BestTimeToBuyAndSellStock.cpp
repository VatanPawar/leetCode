// Last updated: 7/11/2025, 12:10:11 AM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1){return 0;}
        int maxi=prices[prices.size()-1];
        int ans=0;
        for(int i=prices.size()-1;i>=0;i--){
            if(maxi<prices[i]){
                maxi=prices[i];
            }
            ans=max(ans,maxi-prices[i]);
        }
        return ans;
    }
};