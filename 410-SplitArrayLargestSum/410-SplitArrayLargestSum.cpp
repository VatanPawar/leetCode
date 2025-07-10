// Last updated: 7/11/2025, 12:08:22 AM
class Solution {
public:

    bool check(int mid,vector<int>arr,int k){
        int c=1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]<=mid){
                sum+=arr[i];
            }
            else if(arr[i]>mid){            //mistaken here - not identified the condition that arr[i]>mid
                return 0;
            }
            else{
                c++;
                sum=arr[i];
                if(c>k){
                    cout<<"check is false for mid : "<<mid<<endl;

                    return 0;
                }
            }
        }

                cout<<"check is true for mid : "<<mid<<endl;

        return c<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int res=0;
        if(nums.size()==0){
            return 0;
        }
        int sum=0;
        int mini=nums[0];
        for(auto it:nums){
            sum+=it;
            mini=min(mini,it);
        }

        int s=mini;
        int e=sum;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(mid,nums,k)){
                res=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return res;
    }
};