// Last updated: 7/11/2025, 12:02:09 AM
class Solution {
public:
void solve(vector<int>& nums,int i){
    deque<int>dq;
    for(int j=i;j<i+3&&j<nums.size();j++){
        dq.push_back(nums[j]);
    }
    for(int j=i;j<i+3&&j<nums.size();j++){
        if(dq.front()==1)
       { nums[j]=0;}
        else{
            nums[j]=1;
        }
        dq.pop_front();
    }
}
    int minOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]==0){
                count++;
                solve(nums,i);
            }
        }
        for(auto it:nums){
            // cout<<it<<" ";
            if(it==0){
                return -1;
            }
        }
        return count;
    }
};