// Last updated: 7/11/2025, 12:05:33 AM
class Solution {
public:
    int mod=1e9+7;
    
    int solve(int tgt,int n,int k,vector<vector<int>>&t){
        if(n==0){
            return tgt==0;
        }
        // if(tgt==0){
        //     // cout<<"tgt=0 at : "<<n<<" "<<endl;
        //     return 1;
        // }
        if(tgt<0){
            return 0;
        }
        if(t[n][tgt]!=-1){
            return t[n][tgt];
        }
        int ans=0;
     for (int i = 1; i <= k; i++) {
            ans = (ans + solve(tgt - i, n - 1, k, t)) % mod;
        }

        // if(ans==0){
        //     return ans;
        // }
        return t[n][tgt]=ans;
    }
    
    int numRollsToTarget(int n, int k, int tgt) {
        vector<vector<int>>t(n+1,vector<int>(tgt+1,-1));
        return solve(tgt,n,k,t);
    }
};