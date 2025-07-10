// Last updated: 7/11/2025, 12:01:46 AM
class Solution {
public:
    int minOperations(vector<int>& arr, int k) {
        int sum=0;
        for(auto it:arr){
            sum+=it;
        }
        if(sum%k==0){
            return 0;
        }
            
        int near=sum/k;
        cout<<"near is "<<near<<endl;
        if(near==0){
            return sum;
        }
        return sum%(near*k);
    }
};