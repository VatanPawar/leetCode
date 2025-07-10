// Last updated: 7/11/2025, 12:06:39 AM
class Solution {
public:
    int binaryGap(int n) {
        int ans=0;
        int i=0;
     
        while((n&1)==0){
            n=n>>1;
        }
        if(n==0 || n==1){
            return 0;
        }
     
        while(n>0){
            if((n&1)==1){
                ans=max(ans,i);
                i=0;
            }
            
                i++;
            
            
            n=n>>1;
        }
       
        return ans;
    }
};