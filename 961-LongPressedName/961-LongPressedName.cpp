// Last updated: 7/11/2025, 12:06:19 AM
class Solution {
public:
    void solve(string arr,vector<pair<char,int>>&ans){
        
        if(arr.size()==1){
            ans.push_back({arr[0],1});
        }
        
        char ch=arr[0];
        int count=1;
        // cout<<"entered";
        for(int i=1;i<arr.size();i++){
            if(i==arr.size()-1){
                if(arr[i]==ch){
                    ans.push_back({ch,count+1});
                }
                else {
                    ans.push_back({ch,count});
                    ans.push_back({arr[i],1});
                }
            }
            
            else{
                if(arr[i]==ch){
                    count++;
                }
                else{
                    ans.push_back({ch,count});
                    ch=arr[i];
                    count=1;
                }
            }
        }
        for(auto it:ans){
            cout<<it.first<<"->"<<it.second<<" ";
        }
        cout<<endl;
        
    }
    bool isLongPressedName(string name, string typed) {
        if(name.size()==0 || typed.size()==0){
            return typed.size()==name.size();
        }
        vector<pair<char,int>>n;
        solve(name,n);
         vector<pair<char,int>>t;
        solve(typed,t);
        
        
        if(n.size()!=t.size()){
            return 0;
        }
        for(int i=0;i<n.size();i++){
            if(n[i].first!=t[i].first){
                return 0;
            }
            else if(n[i].second>t[i].second){
                return 0;
            }
        }
        return 1;
    }
    
};