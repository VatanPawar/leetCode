// Last updated: 7/11/2025, 12:01:48 AM
class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int>prevSmall(cost.size(),INT_MAX);
        int temp=INT_MAX;
        for(int i=0;i<cost.size();i++){
            prevSmall[i]=temp;
            if(cost[i]<temp){
                temp=cost[i];
            }
        }
        vector<int>ans(cost.size(),-1);
        for(int i=0;i<cost.size();i++){
            ans[i]=min(cost[i],prevSmall[i]);
        }
        return ans;
    }
};