// Last updated: 7/11/2025, 12:04:35 AM
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        //maintaining two queues 
        //q1.empty()&&q2.front()!=stack.top then return q2.size();
        queue<int> q,q2;
        stack<int>st;
        for(int i : students){
            q.push(i);
        }
        for(int i=sandwiches.size()-1;i>=0;i--){
            st.push(sandwiches[i]);
        }
        int size=students.size();
        int flag=0;
        while(true){
           while(!st.empty()&&q.front()==st.top()){
            flag=0;
            q.pop();st.pop();
           }
           if(st.empty()){
            return 0;
           }
           if(!st.empty()&&q.front()!=st.top()){
            q.push(q.front());
            q.pop();
            flag++;
           }
           if(flag==size){
            return q.size();
           }
        }
        return 0;

        


        return 0;
    }
};