// Last updated: 7/11/2025, 12:06:52 AM
class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double,vector<int>>,vector<pair<double,vector<int>>>,greater<pair<double,vector<int>>>>pq;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                double temp=(double)arr[i]/arr[j];
                pq.push({temp,{arr[i],arr[j]}});
            }
        }
        while(k-- && k>0){
           
            pq.pop();
        }
       return pq.top().second;
        // return res;
    }
};