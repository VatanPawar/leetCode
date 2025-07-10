// Last updated: 7/11/2025, 12:05:05 AM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& arr) {
      vector<int>ans(arr.size(),-1);
        
      // set<int>s;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]].push_back(i);
            // s.insert(arr[i]);
        }
        priority_queue<int>pq;
        for(auto it:arr){
            pq.push(it);
            // s.pop();
        }
        while(!pq.empty()){
            
            int top =pq.top();
            while(!pq.empty()&&pq.top()==top){
            pq.pop();
            }
            int temp=pq.size();
            for(auto it:mp[top]){
                ans[it]=temp;
            }
        }
        return ans;
        
        
    }
};