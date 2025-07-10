// Last updated: 7/11/2025, 12:09:44 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int i=0;
        int j=arr.size()-1;
        vector<int>ans(2);
        while(i<=j){
            if(arr[i]+arr[j]==target){
                ans[0]=i+1;
                ans[1]=j+1;
                return ans;
            }
            else if(arr[i]+arr[j]>target){
                j--;
            }
            else {
                i++;
            }
        }
        return ans;
    }
};