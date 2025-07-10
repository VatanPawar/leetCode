// Last updated: 7/11/2025, 12:03:27 AM
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        vector<priority_queue<int>>pv;
        for(int i=0;i<grid.size();i++){
            priority_queue<int>temp;
            for(int j=0;j<grid[i].size();j++){
                temp.push(grid[i][j]);
            }
            pv.push_back(temp);
        }

        int m=grid[0].size();
        int sum=0;
        while(m--){
            priority_queue<int>ans;
            for(int i=0;i<pv.size();i++){
                ans.push(pv[i].top());
                pv[i].pop();
            }
            sum+=ans.top();
        }
        return sum;
    }
};