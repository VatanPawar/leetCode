// Last updated: 7/11/2025, 12:03:25 AM
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ans=0;
        priority_queue<int>pq;
        for(auto it:nums){
            pq.push(it);
        }
        while(k--){
            int top=pq.top();
            pq.pop();
            int c=ceil((double)top/3);
            // int temp=top-c;
            pq.push(c);
            // cout<<"pushing "<<c<<endl;
            ans+=top;
        }
        return ans;
    }
};