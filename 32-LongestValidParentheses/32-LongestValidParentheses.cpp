// Last updated: 7/11/2025, 12:11:07 AM
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int maxLen = 0;

        for(int i = 0; i<s.length(); i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                //agar st empty hai it means aak invalid element in st stack ne -1 ko pop kar diya toh ham length inc nhi karenge bas woh last index save kar lenge
                if(st.empty()){
                    st.push(i);
                }
                else{
                    int len  = i - st.top();
                    maxLen = max(maxLen, len);
                }
                
            }
        }
        return maxLen;
    }
};