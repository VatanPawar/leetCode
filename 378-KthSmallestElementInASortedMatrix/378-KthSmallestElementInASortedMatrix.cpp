// Last updated: 7/11/2025, 12:08:34 AM
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // priority_queue<int>pq;
        vector<int>a;
        for(auto it:matrix){
            for(auto i:it){
               a.push_back(i);
            }
        }
        sort(a.begin(),a.end());
        // auto it=a.begin()+k-1;
        // int ans=*it;
        return a[k-1];
    }
};