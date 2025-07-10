// Last updated: 7/11/2025, 12:06:15 AM
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int i=0;
        for(int j=0;j<pushed.size();){

            
            st.push(pushed[j]);
            j++;
            while(!st.empty()&&st.top()==popped[i]){
                cout<<"popping "<<st.top()<<endl;
                st.pop();i++;
            }
        }
        if(st.empty()){
            return 1;
        }
        return 0;
    }
};