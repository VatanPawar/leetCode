// Last updated: 7/11/2025, 12:05:45 AM
class Solution {
public:
    int heightChecker(vector<int>& arr) {
        vector<int>arr2=arr;
        sort(arr.begin(),arr.end());
        int c=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=arr2[i]){
                c++;
            }
        }
        return c;
    }
};