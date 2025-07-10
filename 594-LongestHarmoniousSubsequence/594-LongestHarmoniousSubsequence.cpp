// Last updated: 7/11/2025, 12:07:37 AM
class Solution {
public:
    int findLHS(vector<int>& arr) {
        // int ans=INT_MIN;
        
        // return ans;
        unordered_map<int,int>mp;
        sort(arr.begin(),arr.end());
        int i=0;
        int j=0;
        int ans=0;
        while(j<arr.size()){
            while(abs(arr[i]-arr[j])>1){
                mp[arr[i]]=0;
                i++;

            }
            mp[arr[j]]++;
            if(arr[j]-arr[i]>0){
                ans=max(ans,mp[arr[i]]+mp[arr[j]]);
            }
            j++;
        }
        return ans;
    }

};