// Last updated: 7/11/2025, 12:04:10 AM
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto it:piles){
            pq.push(it);
        }

        while(k--){
            int top=pq.top();
            int rem=pq.top()/2;
            pq.pop();
            int temp=top-rem;
            pq.push(temp);


        }
        int ans=0;
        while(!pq.empty()){
            ans+=pq.top(); pq.pop();
        }
        return ans;
    }

};