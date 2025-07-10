// Last updated: 7/11/2025, 12:09:01 AM
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>st;
        string temp="";
        set<char>s1;
        set<string>s2;
        for(auto it:s){
            if(it==' '){
                if(temp!=""){
                    st.push_back(temp);
                     s2.insert(temp);
                }
                temp="";
            }
            else{
                temp+=it;
            }
        }
        if(temp!=""){
                    st.push_back(temp);
            s2.insert(temp);
                }
        if(st.size()!=pattern.size()){
            return 0;
        }
        for(auto it:st){
            cout<<it<<" ";
        }
        unordered_map<char,string>mp;
        bool flag=true;
        for(int i=0;i<pattern.size();i++){
            s1.insert(pattern[i]);
            if(mp[pattern[i]]==""){
                mp[pattern[i]]=st[i];
            }
            else if(mp[pattern[i]]!=st[i]){
               flag=false;
            }
        }
        cout<<s1.size()<<" "<<s2.size();
        if(s1.size()!=s2.size()){
            return 0;
        }
       // if(mp.size()!=pattern.size()){
       //     return 0;
       // }
        return flag;
    }
};