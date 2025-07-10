// Last updated: 7/11/2025, 12:05:14 AM
class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        while(num>0){
            if(num%2==1){
                c++;num-=1;
            }
            else{
                num=num>>1;
                c++;
            }
        }
        return c;
    }
};