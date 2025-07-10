// Last updated: 7/11/2025, 12:03:17 AM
class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long ans=0;
        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq;
        
        vector<int>marked(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            pair temp={nums[i],i};              //number,index
            pq.push(temp);
        }

        while(!pq.empty()){
            while(!pq.empty() && marked[pq.top().second]!=-1){         //removing the marked elements
                pq.pop();
            }
            if(!pq.empty()){
                pair temp=pq.top();pq.pop();
                marked[temp.second]=1;
                ans+=temp.first;
                int index=temp.second;
                if(index-1>=0){
                    marked[index-1]=1;
                }
                if(index+1<nums.size()){
                    marked[index+1]=1;
                }
            }
        }
        return ans;
    }
};