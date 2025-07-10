// Last updated: 7/11/2025, 12:04:53 AM
class Solution {
public:
    vector<int> finalPrices(vector<int>& a) {
        stack<int>st;
        vector<int>ans(a.size(),0);
        for(int i=ans.size()-1;i>=0;i--){
            while (!st.empty() && st.top()>a[i] ){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=(st.top());
            }
            st.push(a[i]);
        }
        for(int i=0;i<a.size();i++){
            a[i]=a[i]-ans[i];
        }
        return a;
    }
};