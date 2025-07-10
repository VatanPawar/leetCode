// Last updated: 7/11/2025, 12:06:53 AM
class Solution {
public:
    int search(vector<int>& a, int target) {
        int a2 = -1;
        int n= a.size();
        int low = 0 ;
        int high = n-1;
        while(low<=high){
            int mid= (low+high)/2;
            if(a[mid]==target){a2=mid;break;}
            else if(target>a[mid]){low=mid+1;}
            else {high = mid-1;}
        }
        return a2;
    }
};