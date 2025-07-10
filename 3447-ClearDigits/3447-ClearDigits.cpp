// Last updated: 7/11/2025, 12:02:11 AM
class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        s="";
        while(!st.empty()){
            char ch=st.top();
            s=s+ch;
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;

    }
};