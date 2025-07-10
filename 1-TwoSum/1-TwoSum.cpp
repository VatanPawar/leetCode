// Last updated: 7/11/2025, 12:11:32 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        
        unordered_map<int,int>mp;
        unordered_map<int,int>mpI;
       
      for(int i=0;i<arr.size();i++){
          if(mpI.find(arr[i])==mpI.end()){
              mpI[arr[i]]=i;
          }
          mp[arr[i]]=i;
      }
        sort(arr.begin(),arr.end());
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            int sum=arr[i]+arr[j];
            if(sum==target){
                cout<<i<<j<<endl;
                if(arr[i]==arr[j]){
                    cout<<mpI[arr[i]]<<endl;
                      cout<<mp[arr[j]]<<endl;
                    return {mpI[arr[i]],mp[arr[i]]};
                }
                return {mp[arr[i]],mp[arr[j]]};
            }
            else if(sum>target){
                j--;
            }
            else i++;
        }
        
        return {};
        
        
    }
};