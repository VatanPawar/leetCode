// Last updated: 7/11/2025, 12:07:30 AM
class Solution {
public:
vector<vector<int>>t;
int solve(int n,int prevFirst,vector<vector<int>>&arr){
    if(n==0){
        return 0;
    }
    if(t[n][prevFirst+1]!=-1){
        return t[n][prevFirst+1];
    }
    int exc=solve(n-1,prevFirst,arr);
    int inc=0;

    if(prevFirst==-1 || arr[prevFirst][0]>arr[n-1][1]){             //mistaken here 
//(arr[prevFirst-1][0]>arr[n-1][1])(its just dont store proper index means the index wwhichh should be ther)(lack of dry run);
        
        inc=1+solve(n-1,n-1,arr);
    }
    return t[n][prevFirst+1]=max(inc,exc);
}
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();
        t=vector<vector<int>>(n+1,vector<int>(n+1,-1));

        sort(pairs.begin(),pairs.end());        //mistaken here
        //what u mistaken?why its wrong ?how u failed?  
        //(didnt sort)(if its not sorted then the sequence will be order followed)(not thinked of this case)
        return solve(n,-1,pairs);

    }
};

