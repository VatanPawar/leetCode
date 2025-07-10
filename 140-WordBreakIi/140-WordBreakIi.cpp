// Last updated: 7/11/2025, 12:09:59 AM
class Solution {
public:
    vector<string>ans,req;;
    unordered_map<string,int>mp;
    string s;
    void solve(int i,string prev){
        if(i>=s.size()){
            if(prev.size()>=s.size()){
            ans.push_back(prev);
            }
            return;
        }

        string temp="";
        
        for(int k=i;k<s.size();k++){
            temp+=s[k];
            cout<<temp<<" ";
            if(mp[temp]>0){
                cout<<"if- mp[temp]>0 -- triggerd"<<endl;
                string x;
                if(prev==""){
                    x=temp;
                }
                else{
                    x=prev+" "+temp;
                }
                solve(k+1,x);
            }
            // solve(k+1,temp);
            
        }
    }
    vector<string> wordBreak(string str, vector<string>& wordDict) {
        s=str;
        req=wordDict;
        for(auto it:req){
            mp[it]++;
            // cout<<mp[it];
        }
        solve(0,"");
        return ans;
    }
};