// Last updated: 7/11/2025, 12:10:54 AM
class Solution {
public:
    bool check(vector<int> a){
        for(int i=0;i<a.size();i++){
            if(a[i]>=0){
                return true;
            }
        }
        return false;
    }
    int mini(vector<int> a){
        int maxi=INT_MIN;
        for(int i=0;i<a.size();i++){
            if(a[i]>maxi){
                maxi=a[i];
            }
        }
        return maxi;
    }
    void solve(int &max,vector<int> a){
    int sum=0;
    if(!check(a)){
        max=mini(a);
        return;
    }
        for(int i=0;i<a.size();i++){
       
        sum=sum+a[i];
        if(sum<0){
            sum=0;
        }
       
        if(sum>max){
            max=sum;
           
        }
        }
         
        
    }
    int maxSubArray(vector<int>& nums) {
  int max;
    max = INT_MIN;
    solve(max,nums);
   return max;
    }
};