// Last updated: 7/11/2025, 12:06:05 AM
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=00;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(s[i]=='c' &&st.size()>1){
                int top1=st.top();
                st.pop();
                if(top1=='b'&&st.top()=='a'){
                    st.pop();
                }
                else{
                    st.push(top1);
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};