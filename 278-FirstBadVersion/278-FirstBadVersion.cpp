// Last updated: 7/11/2025, 12:09:05 AM
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //binary search
        int s=1;
        int e=n;
        // if(isBadVersion(s) ){
        //     return s;
        // }
        // if(isBadVersion(e)){
        //     return e;
        // }
        int ans=-1;
        while(s<=e){
        
        int mid=s+(e-s)/2;
        if(isBadVersion(mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
          
        }
           return ans;
    }
};