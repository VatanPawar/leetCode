// Last updated: 7/11/2025, 12:04:29 AM
class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        int ans=0;
        if(a>0){
            pq.push(a);
        }
        if(b>0){
            pq.push(b);
        }
        if(c>0){
            pq.push(c);
        }
        // pq.push(-1);
        while(pq.size()>1){

            int temp1=pq.top();pq.pop();
            int temp2=pq.top();pq.pop();
            temp1--;temp2--;
            if(temp1>0){
                pq.push(temp1);
            }
            if(temp2>0){
                pq.push(temp2);
            }
            ans++;

        }
        return ans;

    }
};