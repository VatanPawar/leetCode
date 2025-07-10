// Last updated: 7/11/2025, 12:05:57 AM
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int j=0;
        stack<char>st;
        int oc=0;
        int cc=0;
        while(j<s.size()){
            char ch=s[j];
            if(st.empty()){
                st.push(ch);
                oc++;
            }
            else if(ch=='('){
                st.push(ch);oc++;
            }
            else if(ch==')' && st.size()%2==1 && cc==(oc-1)){
            string temp="";
                
                while(st.size()>1){
                    temp+=st.top();
                    st.pop();
                }
                st.pop();
                cc=0;oc=0;
                reverse(temp.begin(),temp.end());
                cout<<temp<<endl;
                ans+=temp;
            }
            else{
                st.push(ch);
                cc++;
            }
            j++;
        }
        return ans;
    }
};