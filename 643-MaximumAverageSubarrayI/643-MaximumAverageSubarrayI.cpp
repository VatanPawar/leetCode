// Last updated: 7/11/2025, 12:07:32 AM
class Solution {
public:
double slidingWindow(vector<int> &nums,int k){
    int i=0,j=k-1;
    int sum=0;
    for(int y=i;y<=j;++y){
        sum =sum+nums[y];

    }
    int maxSum=sum;
    j++;
    while(j<nums.size()){
        sum=sum-nums[i++];
        sum = sum + nums[j++];
        maxSum = max(maxSum,sum);
    }
    double maxAvg = maxSum / (double) k;
    return maxAvg;
}
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums,k);
    }
};