// Last updated: 7/11/2025, 12:05:29 AM
class Solution {
public:
    string reverseParentheses(string s) 
    {
        string ans = "";
        stack<int>st;

        for(char c:s)
        {
            if(c == '(') st.push(ans.length());
            else if(c == ')')
            {
                int start = st.top();
                st.pop();
                reverse(ans.begin()+start, ans.end());
            }
            else ans.push_back(c);
        }

        return ans;
    }
};