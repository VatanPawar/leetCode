// Last updated: 7/11/2025, 12:08:38 AM
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=1;
        long long  h=num;
        if(num<=1){
            return 1;
        }
        while(l<=h){
            long long  mid=(l+h)/2;
            if(mid*mid==num){
                return 1;
            }
            if(mid*mid>num){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return 0;
    }
};