// Last updated: 7/11/2025, 12:05:46 AM
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

        for(int i=0;i<s.length();i++){

            if(st.empty()){
                st.push(s[i]);
            }
            else if(s[i]==st.top()){
                st.pop();
            }
            else{
                st.push(s[i]);
            } 
            
        }
        string ans="";
        int flag=0;
        while(!st.empty()){
            if(flag>0){
                ans.insert(ans.begin(),st.top());
            }
            else{ans=ans+st.top();flag++;};
            st.pop();
        }
     
        return ans;
     
    }
};