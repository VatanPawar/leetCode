// Last updated: 7/11/2025, 12:07:08 AM
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        vector<int>ans(a.size(),0);
        stack<int>st;
        for(int i=a.size()-1;i>=0;i--){
            if(st.empty()){
                st.push(i);
            }
            else{
                while(!st.empty() && a[st.top()]<=a[i]){
                    st.pop();
                }
                if(!st.empty()){
                    ans[i]=st.top();
                }
                st.push(i);
            }
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=0){ans[i]-=i;}
        }
        return ans;
    }
};