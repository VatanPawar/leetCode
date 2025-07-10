// Last updated: 7/11/2025, 12:07:14 AM
class Solution {
public:
    bool isOneBitCharacter(vector<int>&arr) {
        if(arr.size()==1){
            return 1;
        }
        int n=arr.size();
       for(int i=0;i<n;){
           if((arr[i]==1&&arr[i+1]==0) || (arr[i]==1&&arr[i+1]==1)){
               i+=2;
           }
           else if(i==n-1){
               return 1;
           }
           else {
               i++;
           }
       }
        return 0;
    }
};