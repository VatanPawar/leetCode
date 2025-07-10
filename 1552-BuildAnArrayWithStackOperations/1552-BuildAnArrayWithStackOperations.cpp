// Last updated: 7/11/2025, 12:04:57 AM
class Solution {
public:
    vector<string> buildArray(vector<int>& arr, int n) {
        vector<string>ans;
        int k=1;
        for(int i=0;i<arr.size();i++){
            int temp=i+k;
            if(arr[i]-temp==0){
                ans.push_back("Push");
            }
            else{
                int diff=arr[i]-temp;
                // int t=diff;
                for(int i=0;i<diff;i++){
                    ans.push_back("Push");
                }
                 for(int i=0;i<diff;i++){
                    ans.push_back("Pop");k++;
                }
                 ans.push_back("Push");
            }
        }
        return ans;
    }
};