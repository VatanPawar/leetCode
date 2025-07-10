// Last updated: 7/11/2025, 12:04:43 AM
class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int maxLen=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                int temp=st.size();
                maxLen=max(maxLen,temp);
                if(!st.empty()){
                    st.pop();
                }
                
            }
        }
        return maxLen;
    }
};