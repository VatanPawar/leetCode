// Last updated: 7/11/2025, 12:04:42 AM
class Solution {
public:

    // vector<int>solve(vector<int>&arr,int k){
    //     int n=arr.size();
    //     vector<int>ans;

    // }

    vector<int> decrypt(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>ans(n);
        int sum=0;
        if(k<0){
            // return solve(arr,k);

        }
        
        int i=1;
        int j=1;

        //edge case
         if(k<0){
           i=j=k+n;
           k=k*-1;
            
        }
        cout<<i<<" "<<j<<endl;
        sum=0;
        int a=0;
        while(a<n){

            //window logic
           while(j-i+1<=k){
            sum+=arr[j%(n)];
            j++;
           }
           //answer
           ans[a]=sum;
           a++;
           //sliding window
        
           sum=sum-arr[i%n];
           
           i++;
        }
        return ans;
    }
};