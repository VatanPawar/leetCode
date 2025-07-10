// Last updated: 7/11/2025, 12:11:00 AM
class Solution {
public:

void solve(set < vector<int> > &final,vector<int>ans,int dif,int n,vector<int>arr,int i){
   
    
    if(dif==0){
        sort(ans.begin(),ans.end());
        final.insert(ans);
        return ;
        
    }
     if(i>=n||dif<0){
        return;
    }
    ans.push_back(arr[i]);
    solve(final,ans,dif-arr[i],n,arr,i+1);
    
    ans.pop_back();

    while (i + 1 < n && arr[i] == arr[i + 1]) {
            i++;
        }
    
    solve(final,ans,dif,n,arr,i+1);
    
    
    
}

    vector<vector<int>> combinationSum2(vector<int>& arr, int dif) {
       set<vector<int>>final;
 vector<vector<int>>final2;
 vector<int>ans; 
 solve(final,ans,dif,arr.size(),arr,0);
  
  
  for(auto it:final){
      final2.push_back(it);
  }
  return final2;  
}};