// Last updated: 7/11/2025, 12:10:42 AM
class Solution {
public:
    string simplifyPath(string s) {
        stack<string> st;
        string currString = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '/') {
                if (currString == "..") {
                    if (!st.empty()) {
                        st.pop(); // Remove the previous directory if ".." is encountered
                    }
                }
                else if (!currString.empty() && currString != ".") {
                    st.push(currString); // Push valid directory name to the stack
                }
                currString = ""; // Reset current string after processing
            } 
            else {
                currString += s[i];
            }
        }
        
        // Handle the last part of the path after the loop
        if (currString == "..") {
            if (!st.empty()) {
                st.pop();
            }
        } 
        else if (!currString.empty() && currString != ".") {
            st.push(currString);
        }
        
        // Build the result string
        string ans = "";
        while (!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }
        
        // If the stack is empty, it means the simplified path is the root "/"
        return ans.empty() ? "/" : ans;
    }
};
