// Last updated: 7/11/2025, 12:04:41 AM
class Solution {
public:
    vector<vector<int>>t;
    int solve(int n,vector<char>arr,int i){
        if(n==0){
            
            return 1;
        }
        if(i==arr.size()){
            return 0;
        }
        if(t[n][i]!=-1){
            return t[n][i];
        }
        //include
        int inc=solve(n-1,arr,i);
        //exclude
        int exc=solve(n,arr,i+1);
        return t[n][i]=inc+exc;
    }
    int countVowelStrings(int n) {
        //solve using dp
        //
        vector<char>vowels={'a','e','i','o','u'};
        t=vector<vector<int>>(n+1,vector<int>(7,-1));
        //type-unbounded knapsack
        return solve(n,vowels,0);
    }
};