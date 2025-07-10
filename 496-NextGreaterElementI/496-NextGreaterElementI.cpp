// Last updated: 7/11/2025, 12:08:02 AM
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a1, vector<int>& a2) {
        stack<int> st;
        vector<int>ans;
        vector<int>hash(10000,-1);
        st.push(-1);
        for(int i=a2.size()-1;i>=0;i--){
           
           while (!st.empty()&& st.top()<=a2[i]){
                st.pop();
     
            }
            if(!st.empty()){
                hash[a2[i]]=st.top(); 
            }
            st.push(a2[i]);

        }

        for(int i=0;i<a1.size();i++){
            ans.push_back(hash[a1[i]]);
        }
        return ans;


    }
};