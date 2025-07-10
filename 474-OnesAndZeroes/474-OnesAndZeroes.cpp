// Last updated: 7/11/2025, 12:08:06 AM
class Solution {
public:
    vector<vector<vector<int>>>t;   //m,n,size
    int solve(int m,int n,int size,vector<pair<int,int>>&arr){
        if(m<0||n<0){
            return 0;
        }
        if(m==0&&n==0){
            return 0;
        }
        if(size==00){
            return 0;
        }
        if(t[size][m][n]!=-1){
            return t[size][m][n];
        }
        int z=arr[size-1].first;
        int o=arr[size-1].second;
        int exc=solve(m,n,size-1,arr);
        if(m>=z&&n>=o){
            int inc =1+solve(m-z,n-o,size-1,arr);
            return t[size][m][n]=max(inc,exc);
        }
        return t[size][m][n]=exc;

    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>>arr;
        t=vector<vector<vector<int>>> (strs.size()+1, vector<vector<int>>(m+1, vector<int>(n+1, -1)));


        for(auto str:strs){
            int z=0;
            int o=0;
            for(auto ch:str){
                if(ch=='0'){
                    z++;
                }
                else{
                    o++;
                }
            }
            arr.push_back({z,o});
        }
        for(auto it:arr){
            cout<<it.first<<"->"<<it.second<<" ";
        }
        return solve(m,n,strs.size(),arr);
    }
};