// Last updated: 7/11/2025, 12:10:34 AM
class Solution {
public:
    bool search(vector<int>& a, int target) {
       int n=a.size();
        int low=0;
        int a2=-1;
        int high=n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(a[mid]==target){a2=mid;break;}
            //if duplicates occurs
            if (a[low] == a[mid] && a[mid] == a[high]) {
                low++;
                high--;
            }
           //while left part iws sorted
            else if(a[low]<=a[mid]){
                if(target>=a[low]&&target<=a[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
            }
            }
            //if right part is sorted
            else{
                if(target>=a[mid]&&target<=a[high]){
                    low=mid+1;
                }
                else
            {
              high=mid-1;
            }}

            


        }

        bool flag;
            if (a2==-1){
                flag=0;
            }
            else{
                flag=1;
            }
            return flag;
}};