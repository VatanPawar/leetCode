// Last updated: 7/11/2025, 12:04:46 AM
class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(st.empty()){
                st.push(s[i]);
            }
            else if((ch>='A'&&ch<='Z')&&(st.top()==ch-'A'+'a')){
                st.pop();
            }
            else if((ch>='a'&&ch<='z')&&(st.top()==ch-'a'+'A')){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            ans=ans + st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};