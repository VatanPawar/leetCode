// Last updated: 7/11/2025, 12:08:36 AM
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long l=1;
        long long h=n;
      
        while(l<=h){
            long long mid=(l+h)/2;
            long long temp=guess(mid);
            if(temp==0){
                return mid;
            }
            else if(temp==-1){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
    }
};