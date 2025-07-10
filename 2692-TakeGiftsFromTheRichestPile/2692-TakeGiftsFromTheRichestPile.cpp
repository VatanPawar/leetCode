// Last updated: 7/11/2025, 12:03:18 AM
class Solution {
public:
    long long pickGifts(vector<int>& arr, int k) {
        priority_queue<int>pq;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }

        while(k--){
            int temp=pq.top();
            int x= (int)sqrt(temp);
            pq.pop();
            pq.push(x);
        }
        long long ans=0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};