// Last updated: 7/11/2025, 12:05:44 AM
class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        unordered_map<int,int>hash;
        for(auto it:barcodes){
            hash[it]++;
        }
        priority_queue<pair<int,int>>pq; //freq element
        for(auto it:hash){
            pq.push({it.second,it.first});
        }
        vector<int>ans;
        while(pq.size()>=2){
            auto [freq1,el1]=pq.top();pq.pop();
            auto [freq2,el2]=pq.top();pq.pop();
            
            ans.push_back(el1);ans.push_back(el2);
            if(--freq1>0)   pq.push({freq1,el1});
            if(--freq2>0)   pq.push({freq2,el2});
        }
        while(!pq.empty()){
           auto [freq1,el1]=pq.top();pq.pop();
           if(freq1>1){return {};}
           else {
            ans.push_back(el1);
           }
        }
        return ans;
    }
};