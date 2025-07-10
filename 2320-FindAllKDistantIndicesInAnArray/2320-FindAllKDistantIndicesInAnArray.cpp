// Last updated: 7/11/2025, 12:03:48 AM
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k2) {
        vector<int>keys;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                keys.push_back(i);
            }
        }
        // int j=0;
        vector<int>ans;
        // for(auto it:keys){
        //     cout<<it<<" ";
        // }
        cout<<endl;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<keys.size();j++){
                int temp = abs(i-keys[j]);
                if(temp<=k2){
                //    cout<<abs(i-keys[j])<<" -> pushing : " <<i<<endl;

                    ans.push_back(i);j=keys.size();
                                    
                }
            }
        }
        return ans;
    }
};