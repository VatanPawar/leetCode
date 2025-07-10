// Last updated: 7/11/2025, 12:05:13 AM
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0;
        int j=0;
        int ans=0;
        float avg=0;
        while(j<arr.size() ){
            if(j-i+1<k){
            avg += arr[j];
            }

            else if(j-i+1==k){
                // cout<<j-i+1<<endl;
                avg += arr[j];
                // float temp=floor(avg/k);
                if((avg/k)>=threshold){
                    // cout<<"i : "<<i<<" | ";
                    ans++;

                }
                avg-=arr[i];i++;
            }
            j++;
        }
        return ans;
    }
};