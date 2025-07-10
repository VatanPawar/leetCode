// Last updated: 7/11/2025, 12:06:10 AM
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<int>distance(points.size(),-1);
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int> >>pq;
        int n=points.size();
        for(int i=0;i<n;i++){
            long long distance=(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            cout<<distance<<" "<<endl;
            pq.push({distance,i});
        }
        
        vector<int>ans;
        while(k>0){
            k--;
            cout<<pq.top().second;
            ans.push_back(pq.top().second);
            
            pq.pop();
        }
         vector<vector<int>> f;
        for(auto it:ans){
            f.push_back(points[it]);
        }
        
        return f;
        
    }
};