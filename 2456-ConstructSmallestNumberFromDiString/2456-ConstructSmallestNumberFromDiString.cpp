// Last updated: 7/11/2025, 12:03:35 AM
class Solution {
public:
    string smallestNumber(string pattern) {
        int n=pattern.size();
        string ans="";
        stack<int>st;
        int count=1;
        for(int i=0;i<=n;i++){
            st.push(count);
            if(i==n || pattern[i]=='I'){
                while(!st.empty()){
                    int num=st.top();
                    st.pop();
                    ans.push_back(num+'0');
                }
            }
            count++;
        }
        return ans;
    }
};