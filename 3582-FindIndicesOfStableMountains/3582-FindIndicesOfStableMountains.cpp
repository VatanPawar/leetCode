// Last updated: 7/11/2025, 12:02:05 AM
class Solution {
public:
    vector<int> stableMountains(vector<int>& arr, int t) {
        vector<int>x(arr.size(),0);
        int j=0;
        for(int i=1;i<arr.size();i++){
            x[i]=arr[j++];
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(x[i]>t){
                ans.push_back(i);
            }
        }
        return ans;
    }
};