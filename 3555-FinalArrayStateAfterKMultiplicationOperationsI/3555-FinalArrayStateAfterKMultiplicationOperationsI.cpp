// Last updated: 7/11/2025, 12:02:06 AM
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        // priority_queue<pair<int,int>>pq;
       for(int i=0;i<nums.size();i++){
        pair x={nums[i],i};
        pq.push(x);
       }
        for(int i=0;i<k;i++){
             pair temp=pq.top(); pq.pop();
            cout<<"temp is "<<temp.first<<endl;
           
            temp.first=temp.first*multiplier;
           
            pq.push(temp);
        }
        while(!pq.empty()){
            pair temp=pq.top();
            nums[temp.second]=temp.first;
            pq.pop();
        }
        return nums;

    }
};