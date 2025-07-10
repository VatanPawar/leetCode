// Last updated: 7/11/2025, 12:10:36 AM
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        if(arr.size()<=2){
            return arr.size();
        }

        int i=0;
        int j=1;int ans=0;
        int start=0;
        while(j<arr.size()){
            int curr=arr[i];
            while(j<arr.size()&&arr[i]==arr[j]){
                j++;
            }
            int k=min(2,j-i);
            while(k--){
                arr[start]=curr;
                start++;
            }
            ans+=min(2,j-i);
            i=j;

        }
        return ans;
    }
}; 