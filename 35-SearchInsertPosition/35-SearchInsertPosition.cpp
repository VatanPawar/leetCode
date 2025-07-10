// Last updated: 7/11/2025, 12:11:03 AM
class Solution {
public:
    int searchInsert(vector<int>& arr, int tgt) {
        int s=0;
        int e=arr.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==tgt){
                return mid;
            }
            else if(arr[mid]>tgt){
                 ans=mid;
                e=mid-1;
            }
            else{
               
                s=mid+1;
            }
        }
        if(ans==-1){
            return arr.size();
        }
        return ans;
    }
};