// Last updated: 7/11/2025, 12:08:26 AM
class Solution {
public:
    string removeKdigits(string s, int k) {
        stack<char>st;
        if(s.size()==1&&k>=s.size()){
            return "0";
        }
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            while(!st.empty()&&k>0&&st.top()>ch){
                st.pop();k--;
            }
            st.push(ch);
        }
        while(k>0 && !st.empty()){
            st.pop();k--;
        }
        string ans="";
        string a="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        bool flag=false;
        for(int i=0;i<ans.size();i++){
            if(ans[i]!='0'){
                flag=true;
            }
            if(flag){
                a+=ans[i];
            }
        }
        if(ans.size()==s.size()){
            string t="";
            // cout<<"hi"<<endl;
            // return ans.substr(ans.begin(),ans.end());
            cout<<ans.size();
             for(int i=0;i<ans.size()-k;i++){
            {
                t+=ans[i];
            }
               
        }
              return t;
        }
        if(a==""){
            return "0";
        }
        return a;
    }
};