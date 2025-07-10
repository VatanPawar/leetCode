// Last updated: 7/11/2025, 12:06:22 AM
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        
        for(char i:s){
            if(i=='('){
                st.push(i);
            }
            else if(i==')'&&!st.empty()&&st.top()=='('){
               st.pop();
            }
            else{
                st.push(i);
            }
        }
        return st.size();;
    }
};