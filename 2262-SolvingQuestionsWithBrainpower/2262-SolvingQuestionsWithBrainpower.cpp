// Last updated: 7/11/2025, 12:03:55 AM
class Solution {
public:
vector<long long>t;
    long long solve(long long n,vector<vector<int>>& arr){
        if(n<=0){
            return 0;
        }
        if(t[n]!=-1){
            return t[n];
        }
        long long inc=arr[n-1][0]+solve(n-1-arr[n-1][1],arr);
        long long exc=solve(n-1,arr);
        return t[n]=max(inc,exc);
    }
    long long mostPoints(vector<vector<int>>& arr) {
        long long n=arr.size();
        t=vector<long long>(n+1,-1);
        reverse(arr.begin(),arr.end());
        return solve(n,arr);
    }
};