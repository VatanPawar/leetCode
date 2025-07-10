// Last updated: 7/11/2025, 12:03:58 AM
class Solution {
public:
    vector<int> getAverages(vector<int>& arr, int k) {
        int i = 0;
        int j=0;
        vector<int>ans(arr.size(),-1);
        int x=k;
        long long sum=0;
        while(j<arr.size()){
            sum+=arr[j];
            if(j-i+1 < (2*k+1) ){
                j++;
            }
            else if( j-i+1 == 2*k+1){
                // cout<<"sum : "<<sum<<endl;
                if(k!=0){
                ans[x]=(sum)/(2*k+1);}
                if(k==0){
                    ans[x]=sum;
                }
                x++;
                sum-=arr[i];
                i++;
                j++;
            }

        }
        return ans;
    }
};