// Last updated: 7/11/2025, 12:11:06 AM
class Solution {
public:
    int solve(vector<int> arr){
        int start=0;
        int end=arr.size()-1;
        while(start<end){
            int mid=start + (end-start)/2;
            if(arr[mid]>arr[end]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return start;
    }

    
    int search(vector<int>& arr, int target) {
        int x=solve(arr);
        int i = 0;
        int j=0;
        if(x>0){
            j=x-1;
        }
        while(i<=j){
            int m= i+(j-i)/2;
            if(arr[m]==target){
                return m;
            }
            else if(arr[m]>target){
                j=m-1;
            }
            else{
                i=m+1;
            }
        }
        i=x;
        j=arr.size()-1;
        while(i<=j){
            int m= i+(j-i)/2;
            if(arr[m]==target){
                return m;
            }
            else if(arr[m]>target){
                j=m-1;
            }
            else{
                i=m+1;
            }
        }
        return -1;
    }
};