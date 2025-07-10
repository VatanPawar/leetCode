// Last updated: 7/11/2025, 12:05:06 AM
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        //bs - reverse the binary conditions updating conditions

        int count=0;
        if(grid.size()==0){
            return 0;
        }
        int n=grid[0].size();
        for(auto it:grid){
            int s=0;
            int e=n-1;
            int idx=-1;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(it[mid]<0){
                    idx=mid;
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            if(idx!=-1){
                count+=(n-idx);
            }
        }
        return count;
    }
};