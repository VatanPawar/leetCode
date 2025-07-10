// Last updated: 7/11/2025, 12:03:43 AM
class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>pq;
        for(auto it:amount){
            if(it>0){
            pq.push(it);}
        }
        int c=0;
        while(pq.size()>0){
            c++;
            int temp1=pq.top();
            pq.pop();

            if(!pq.empty()){
            int temp2=pq.top();
            pq.pop();
            if(temp2-1>0){
                pq.push(temp2-1);
            }
            }

            if(temp1-1>0){
                pq.push(temp1-1);
            }
        }
        
        return c;
    }

    
};