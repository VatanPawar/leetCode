// Last updated: 7/11/2025, 12:05:02 AM
class Solution {
public:
    void solve(int n,int &ans){
        while(n>0){
            ans+=n%10;
            n/=10;
        }
    }
    int countLargestGroup(int n) {
        //unordered_map -sum of digits ,count of the numbers
        unordered_map<int,int>mp;
        int maxFreq=INT_MIN;
        for(int i=1;i<=n;i++){
            int temp=i;
            int sum=0;
            solve(i,sum);
            mp[sum]++;
            maxFreq=max(maxFreq,mp[sum]);
        }
        int ans=0;
        for(auto it:mp){
            if(it.second==maxFreq){
                ans++;
            }
            // cout<<it.first<<" "<<it.second<<endl;
        }
        return ans;
    }
};