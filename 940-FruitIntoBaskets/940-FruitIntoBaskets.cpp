// Last updated: 7/11/2025, 12:06:27 AM
class Solution {
public:
    int totalFruit(vector<int>& arr) {
       if(arr.size()<=2){
           return arr.size();
       }
        int n=arr.size();
        int i=0;
        int j=0;
 
        unordered_map<int,int>mp;
        int ans=0;
       
        while(j<n){
            mp[arr[j]]++;
           
            
             if(mp.size()<=2){
               
            }
            else{
                       
                while(mp.size()>2){
                    mp[arr[i]]--;
                    if(mp[arr[i]]==0){
                        mp.erase(arr[i]);
                    }
                    i++;
                }
            }
            ans=max(ans,j-i+1);
             j++;
            
             
        }
       
        return ans;
    }
};