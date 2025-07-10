// Last updated: 7/11/2025, 12:03:21 AM
class Solution {
public:
    vector<int> evenOddBit(int n) {
        bool flag=true;
        int e=0;
        int o=0;
        while(n>0){
            if(flag){
                if((n&1)==1){
                    e++;
                }
                
            }
            else{
                if((n&1)==1){
                    o++;
                }
            }
            flag=!flag;
            n=n>>1;
        }
        return {e,o};
    }
};