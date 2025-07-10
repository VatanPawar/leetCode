// Last updated: 7/11/2025, 12:03:07 AM
class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if((s[i]=='B'&&st.top()=='A')||(s[i]=='D'&&st.top()=='C'))
                    st.pop();
                else{
                    st.push(s[i]);
                }
            }
        }
        return st.size();
    }
};