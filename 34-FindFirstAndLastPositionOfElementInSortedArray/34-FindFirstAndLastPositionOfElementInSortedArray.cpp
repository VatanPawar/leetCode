// Last updated: 7/11/2025, 12:11:04 AM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int a,b;
        a=INT_MAX;
        b=INT_MIN;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                a=mid;
                end=mid-1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            
        }
        start=0;
        end=nums.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                b=mid;
                start=mid+1;
                
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            
        }
        if(a!=INT_MAX){
            return {a,b};
        }
        return {-1,-1};
       
    }
};