// Last updated: 7/11/2025, 12:10:58 AM
class Solution {
    void solve(vector<int> ans,set <vector<int>> &final,int pos,int n,vector<int> arr, vector<char>check){
    if(ans.size()==n){
        final.insert(ans);
        return;
    }
    if(pos>=n){
        return;
    }
    
    //
    for(int i=0;i<n;i++){
        if(check[i]=='f'){
        ans.push_back(arr[i]);
        check[i]='t';
        
        
        solve(ans,final,pos+1,n,arr,check);
        
        check[i]='f';
        ans.pop_back();}
    }
    
}
public:
    vector<vector<int>> permuteUnique(vector<int>& arr) {
    vector<int>ans;
    
    set <vector<int>>final;
    vector<vector<int>> x;
    vector<char>check(arr.size(),'f');
    solve(ans,final,0,arr.size(),arr,check);
    for(auto it : final){
        x.push_back(it);
    }
    return x;
    }
};