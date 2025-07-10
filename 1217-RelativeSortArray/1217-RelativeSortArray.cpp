// Last updated: 7/11/2025, 12:05:40 AM
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp1;
        for(auto it:arr1){
            mp1[it]++;
        }
        vector<int>ans;
        for(auto it:arr2){
            while(mp1[it]--){
                ans.push_back(it);
            }
        }
        // return ans;
        
        unordered_map<int,int>mp2;
        for(auto it:arr2){
            mp2[it]++;
        }
        vector<int>temp;
        for(auto it:arr1){
            if(mp2[it]==0){
                temp.push_back(it);
            }
        }
        sort(temp.begin(),temp.end());
        for(auto it:temp){
            ans.push_back(it);
        }
        return ans;
    }
};