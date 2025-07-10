// Last updated: 7/11/2025, 12:05:09 AM
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        priority_queue<pair<int,int>>pq;//n,f
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:mp){
            pq.push({it.second,it.first});//f,n
        }
        int t=0;
        int sum=0;
        while(sum<n/2){
            pair temp=pq.top();
            cout<<"freq is : "<<temp.first<<endl;
            sum+=temp.first;
            t++;
            pq.pop();
        }
        return t;
    }
};