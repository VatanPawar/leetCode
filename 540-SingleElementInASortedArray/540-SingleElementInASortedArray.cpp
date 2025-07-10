// Last updated: 7/11/2025, 12:07:49 AM
class Solution {
public:
// bool check(int n,vector<int>arr
    int singleNonDuplicate(vector<int>& arr) {
        if(arr.size()==1){
            return arr[0];
        }
        int s=0;
        int e=arr.size()-1;
       
        while(s<=e){
            int mid=s+(e-s)/2;
            // int x=mid;
                {
                    if(mid==0 &&arr[0]!=arr[1]){
                    // cout<<"IF condition 1 "<<endl;

                    return arr[mid];
                }
                if(mid==arr.size()-1 && arr[mid]!=arr[mid-1]){
                    // cout<<"IF condition 2 "<<endl;
                    return arr[mid];
                }

                if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1] ){
                    // cout<<"IF condition 3 "<<endl;
                    return arr[mid];
                }

                }

            if(mid%2==0){
                if(arr[mid+1]!=arr[mid]){
                    e=mid-1;
                }
                else {
                    s=mid+1;
                }
            }
            else{
                if(arr[mid-1]!=arr[mid]){
                    e=mid-1;
                }
                else {
                    s=mid+1;
                }
            }
           
        
        }
        
        return -1;


    }
};