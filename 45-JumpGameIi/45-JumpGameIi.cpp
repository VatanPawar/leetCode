// Last updated: 7/11/2025, 12:10:59 AM
class Solution {
public:
vector<int>arr,t;

    int solve(int i){
        if(i>=arr.size()){
            return 0;
        }
        if(t[i]!=-1){
            return t[i];
        }
        int ans=arr.size();                                         //mistaken here took intmax //
                                                //what ? how? why?-(initialization of ans)(if ans=int max then it may give ans as intmax when arr[i]=0,)(solved on the screen/lack of edry run)
        for(int k=1;k<=arr[i-1];k++){
            ans=min(ans,1+solve(i+k));
        }
        return t[i]=ans;
    }
    int jump(vector<int>& nums) {
        arr=nums;
        int n=nums.size();
        t=vector<int>(n+1,-1);
        return solve(1);
    }
};