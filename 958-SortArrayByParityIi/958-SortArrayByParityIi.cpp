// Last updated: 7/11/2025, 12:06:20 AM
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& a) {
        int e=0;
        int o=1;int n=a.size();
        vector<int>ans(n);
       
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                ans[e]=a[i];
                e=e+2;
            }
            else{
                 ans[o]=a[i];
                o=o+2;
            }
        }
        return ans;
    }
};