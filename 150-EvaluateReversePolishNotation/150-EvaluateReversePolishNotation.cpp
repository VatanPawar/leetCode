// Last updated: 7/11/2025, 12:09:53 AM
class Solution {
public:
    int evalRPN(vector<string>& a) {
        stack<int> st;
        for(int i=0;i<a.size();i++){
            if(a[i]=="+"){
                int e1=(st.top());
                st.pop();
                int e2=(st.top());
                st.pop();
                st.push(e1+e2);

            }
            else if(a[i]=="-"){
                int e1=(st.top());
                st.pop();
                int e2=(st.top());
                st.pop();
                st.push(e2-e1);

            }
             else if(a[i]=="*"){
                int e1=(st.top());
                st.pop();
                int e2=(st.top());
                st.pop();
                st.push(e1*e2);

            }
             else if(a[i]=="/"){
                int e1=(st.top());
                st.pop();
                int e2=(st.top());
                st.pop();
                int temp=floor(e2/e1);
                st.push(temp);

            }
            else{
                int temp=stoi(a[i]);
                st.push(temp);
            }
        }
        return st.top();
    }
};