// Last updated: 7/11/2025, 12:06:34 AM
class Solution {
public:
   vector<int>arr;
   vector<vector<int>>t;
    bool solve(int turn,int n,int aliceMoney,int bobMoney){
        if(n==0){
            return aliceMoney>bobMoney;
        }
        if(t[n][turn]!=-1){
            return t[n][turn];
        }
        if(turn==0){
            return t[n][turn]=(solve(1,n-1,aliceMoney+arr[n-1],bobMoney)||solve(0,n-1,aliceMoney,bobMoney));
        }
        else{
            return (solve(0,n-1,aliceMoney,bobMoney+arr[n-1])||solve(1,n-1,aliceMoney,bobMoney));
        }
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        arr=piles;
        t=vector<vector<int>>(n+1,vector<int>(2,-1));
        bool ans=solve(0,n,0,0);
        for(auto it:t){
            for(auto i:it){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return ans;
    }
};